#include "gazebo/gazebo.hh"

namespace gazebo{
    class WelcomeToWorldPluginBuildMyWorld : public WorldPlugin
    {
    public: WelcomeToWorldPluginBuildMyWorld() : WorldPlugin()
        {
            printf("Welcome to Ahmed-Eltawil's World");
        }
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {
        }
    };

    GZ_REGISTER_WORLD_PLUGIN(WelcomeToWorldPluginBuildMyWorld)
}