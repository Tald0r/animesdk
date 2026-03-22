#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Plugins::Core { class ITweenPlugin; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET UNITYSDK_OFFSET(0x1AF49ED0)

namespace DG::Tweening::Plugins::Core
{
	inline static constexpr unsigned int PluginsManager_TypeDefinitionIndex = 24141;

	class PluginsManager : public ::System::Object
	{
	public:
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA10);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__ulongPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA18);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__colorPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA20);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__intPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA28);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector4Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA30);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__longPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA38);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA40);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__uintPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA48);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>** StaticGet__customPlugins()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA58);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__doublePlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA60);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__quaternionPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA68);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__color2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA70);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectOffsetPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA78);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__stringPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA80);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__floatPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA88);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3ArrayPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1DA90);
		}
		// static const ::System::Int32 _MaxCustomPlugins = 0x14; // 0x0

		static ::System::Void PurgeAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET))();
		}
	};
}
