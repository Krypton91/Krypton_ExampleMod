modded class PluginManager
{	

	//=================================
	// Init
	//=================================
	void Init()
	{	
		super.Init();
		//----------------------------------------------------------------------
		// Register modules
		//----------------------------------------------------------------------
		//				Module Class Name 						Client	Server
		//----------------------------------------------------------------------
		if(GetGame().IsDedicatedServer())
		{
			RegisterPlugin( "TestPlugin",			    false, 	true );
		}
	}
};