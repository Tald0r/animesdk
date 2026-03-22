#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULECOLOR_OFFSET UNITYSDK_OFFSET(0x1ABC69E0)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULEHELPER_OFFSET UNITYSDK_OFFSET(0x1ABC6900)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_RESETLOGMODULEHELPER_OFFSET UNITYSDK_OFFSET(0x1ABC6680)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABC6CC0)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_LogModuleHelper_TypeDefinitionIndex = 8238;

	class SuperDebug_LogModuleHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_SwitchKeyArray()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_LogModuleHelper_TypeDefinitionIndex)->GetStaticField(0x67A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER__CCTOR_OFFSET))();
		}

		static ::System::Void ResetLogModuleHelper()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_RESETLOGMODULEHELPER_OFFSET))();
		}

		static ::System::Void InitLogModuleHelper()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULEHELPER_OFFSET))();
		}

		static ::System::Void InitLogModuleColor(::System::Collections::Generic::List_1<::UnityEngine::Color>*& moduleColors)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULECOLOR_OFFSET))(moduleColors);
		}
	};
}
