#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7F2D530A061B6231.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x79F9000)
#define CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384_METHOD_3_E69D91DA0148D8ED_OFFSET UNITYSDK_OFFSET(0x79F90A0)
#define CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x79F8FA0)
#define CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384__CTOR_OFFSET UNITYSDK_OFFSET(0x79F8F30)

inline static constexpr unsigned int Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384_TypeDefinitionIndex = 44564;

class Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384 : public ::Class_2_7F2D530A061B6231
{
public:
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_3_1; // 0xA8
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_3_0; // 0xB0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_3_2; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_E69D91DA0148D8ED(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384*>*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_6A34D50D546B2384_METHOD_3_E69D91DA0148D8ED_OFFSET))(this, a1, a2);
	}
};
