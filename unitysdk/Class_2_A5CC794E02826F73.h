#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_42.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A5CC794E02826F73_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5AABB0)
#define CLASS_2_A5CC794E02826F73_METHOD_2_53EC0BFDB131E756_OFFSET UNITYSDK_OFFSET(0xA5AAC40)
#define CLASS_2_A5CC794E02826F73_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xA5AAB00)
#define CLASS_2_A5CC794E02826F73__CTOR_OFFSET UNITYSDK_OFFSET(0xA5AAC30)

inline static constexpr unsigned int Class_2_A5CC794E02826F73_TypeDefinitionIndex = 40551;

class Class_2_A5CC794E02826F73 : public ::Class_1_43BD383C98B4C0C5_42
{
public:
	::MoleMole::UIBaseController* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5CC794E02826F73__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5CC794E02826F73_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5CC794E02826F73_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_53EC0BFDB131E756(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A5CC794E02826F73_METHOD_2_53EC0BFDB131E756_OFFSET))(this, a1);
	}
};
