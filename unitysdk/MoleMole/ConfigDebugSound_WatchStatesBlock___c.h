#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCACDE0)
#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CREATEFROMCLIPBOARD_B__4_0_OFFSET UNITYSDK_OFFSET(0xCCACE30)
#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CREATEFROMCLIPBOARD_B__4_1_OFFSET UNITYSDK_OFFSET(0xCCACE50)
#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCCACE20)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDebugSound_WatchStatesBlock___c_TypeDefinitionIndex = 58061;

	class ConfigDebugSound_WatchStatesBlock___c : public ::System::Object
	{
	public:
		static ::MoleMole::ConfigDebugSound_WatchStatesBlock___c** StaticGet___9()
		{
			return (::MoleMole::ConfigDebugSound_WatchStatesBlock___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigDebugSound_WatchStatesBlock___c_TypeDefinitionIndex)->GetStaticField(0x36470);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDebugSound_WatchStatesBlock___c_TypeDefinitionIndex)->GetStaticField(0x36478);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDebugSound_WatchStatesBlock___c_TypeDefinitionIndex)->GetStaticField(0x36480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CTOR_OFFSET))(this);
		}

		::System::String* _CreateFromClipboard_b__4_0(::System::String* line)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CREATEFROMCLIPBOARD_B__4_0_OFFSET))(this, line);
		}

		::System::Boolean _CreateFromClipboard_b__4_1(::System::String* line)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK___C__CREATEFROMCLIPBOARD_B__4_1_OFFSET))(this, line);
		}
	};
}
