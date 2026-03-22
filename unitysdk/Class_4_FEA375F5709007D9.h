#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BF86F633CB1E0F0F.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCurveCtrlLocalPosNode; }
namespace UnityEngine { class Transform; }

#define CLASS_4_FEA375F5709007D9_METHOD_4_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x6FF5950)
#define CLASS_4_FEA375F5709007D9_METHOD_4_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x6FF5C80)
#define CLASS_4_FEA375F5709007D9_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x6FF5890)
#define CLASS_4_FEA375F5709007D9__CTOR_OFFSET UNITYSDK_OFFSET(0x6FF6320)

inline static constexpr unsigned int Class_4_FEA375F5709007D9_TypeDefinitionIndex = 69674;

class Class_4_FEA375F5709007D9 : public ::Class_3_BF86F633CB1E0F0F
{
public:
	::UnityEngine::Transform* Field_4_0; // 0x48
	::MoleMole::Config::ConfigCurveCtrlLocalPosNode* Field_4_1; // 0x50
	::UnityEngine::Vector3 Field_4_3; // 0x58
	::System::Single Field_4_2; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FEA375F5709007D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FEA375F5709007D9_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FEA375F5709007D9_METHOD_4_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_4_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FEA375F5709007D9_METHOD_4_95FC878EB184D294_OFFSET))(this);
	}
};
