#if defined td_engine_natives_includes
  #endinput
#endif
#define td_engine_natives_includes

public plugin_natives()
{
    register_library("td");
    register_native("td_register_monster", "@_td_register_monster");
    register_native("td_get_monster_entity_name", "@_td_get_monster_entity_name");
}

/*
    Params count: minimum 2
    Param 1 string[33]: Monster type name
    Param 2 - X string[128]: Path to monster model
*/
bool:@_td_register_monster(pluginId, argc)
{
    if(argc < 2) 
    {
        log_amx("Bad use of _td_register_monster by plugin %d. Arguments passed %d/2 needed", pluginId, argc);
        return false;
    }

    new Array:monsterModelsArray = ArrayCreate(128);
    new monsterTypeKey[33];

    get_string(1, monsterTypeKey, charsmax(monsterTypeKey));

    for(new i = 2; i <= argc; ++i)
    {
        new model[128];
        get_string(i, model, charsmax(model));
        ArrayPushString(monsterModelsArray, model);
    }

    register_monster(pluginId, monsterTypeKey, monsterModelsArray)

    return true;
}

@_td_get_monster_entity_name(pluginId, argc)
{
    if(argc != 3)
    {
        log_amx("Bad use of _td_get_monster_entity_name");
        return;
    }

    new monsterEntityName[64]
    get_string(1, monsterEntityName, charsmax(monsterEntityName));
    format(monsterEntityName, charsmax(monsterEntityName), "%s_%s", MONSTER_ENTITY_NAME, monsterEntityName);

    set_string(2, monsterEntityName, get_param(3));
}