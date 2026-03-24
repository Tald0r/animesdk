#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class ColorData; }
namespace MoleMole { class RoleTweakColorData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_60983406819BC07A_OFFSET UNITYSDK_OFFSET(0xC23EBB0)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_BE3185ABCAC4124D_OFFSET UNITYSDK_OFFSET(0xC23E9D0)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_C4706E206E236330_OFFSET UNITYSDK_OFFSET(0xC23E820)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_FC021F44C9E0792B_OFFSET UNITYSDK_OFFSET(0xC23EA70)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC23E790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTalentBGColor_TypeDefinitionIndex = 57017;

	class ConfigTalentBGColor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ColorData*>* colorConfigs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RoleTweakColorData*>* tweakColorConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR__CTOR_OFFSET))(this);
		}

		::MoleMole::ColorData* Method_1_C4706E206E236330(::Class_2_D89CCC627A66D0AD* a1)
		{
			return ((::MoleMole::ColorData*(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_C4706E206E236330_OFFSET))(this, a1);
		}

		::UnityEngine::Color Method_1_BE3185ABCAC4124D(::Class_2_D89CCC627A66D0AD* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_BE3185ABCAC4124D_OFFSET))(this, a1);
		}

		::MoleMole::RoleTweakColorData* Method_1_FC021F44C9E0792B(::Class_2_D89CCC627A66D0AD* a1)
		{
			return ((::MoleMole::RoleTweakColorData*(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_FC021F44C9E0792B_OFFSET))(this, a1);
		}

		::System::String* Method_1_60983406819BC07A(::Class_2_D89CCC627A66D0AD* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_METHOD_1_60983406819BC07A_OFFSET))(this, a1);
		}
	};
}
