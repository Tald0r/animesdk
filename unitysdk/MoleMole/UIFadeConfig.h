#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFadeConfig_OverrideAnim; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFADECONFIG_METHOD_1_06BF2ECC021EB333_1_OFFSET UNITYSDK_OFFSET(0x9100FC0)
#define MOLEMOLE_UIFADECONFIG_METHOD_1_06BF2ECC021EB333_OFFSET UNITYSDK_OFFSET(0x9100E50)
#define MOLEMOLE_UIFADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9100E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIFadeConfig_TypeDefinitionIndex = 42599;

	class UIFadeConfig : public ::System::Object
	{
	public:
		::System::String* fadeIn; // 0x10
		::System::String* fadeOut; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UIFadeConfig_OverrideAnim*>* overrideFadeInAnim; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::UIFadeConfig_OverrideAnim*>* overrideFadeOutAnim; // 0x28
		::System::Boolean ignoreFading; // 0x30
		::System::Single ignoreFadeMaskDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_06BF2ECC021EB333(::Enum_3_340DE32BA097F66C a1)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG_METHOD_1_06BF2ECC021EB333_OFFSET))(this, a1);
		}

		::System::String* Method_1_06BF2ECC021EB333_1(::Enum_3_340DE32BA097F66C a1)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG_METHOD_1_06BF2ECC021EB333_1_OFFSET))(this, a1);
		}
	};
}
