#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/Struct_2_218FFCFFC544A6B9.h"
#include "unitysdk/Struct_2_A62B8C05FE608BC8.h"
#include "unitysdk/Struct_2_CA25BDF8E803FBAA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }

#define CLASS_1_277E46A10112AAD6_METHOD_1_193993E25027F89F_OFFSET UNITYSDK_OFFSET(0x7B180F0)
#define CLASS_1_277E46A10112AAD6_METHOD_1_1AF901C2754E3BE7_OFFSET UNITYSDK_OFFSET(0x7B164E0)
#define CLASS_1_277E46A10112AAD6_METHOD_1_5680603F69BE0FA1_OFFSET UNITYSDK_OFFSET(0x7B16800)
#define CLASS_1_277E46A10112AAD6_METHOD_1_D97F272165F4487D_OFFSET UNITYSDK_OFFSET(0x7B16B10)
#define CLASS_1_277E46A10112AAD6_METHOD_1_E502F78AF6785BDD_OFFSET UNITYSDK_OFFSET(0x7B179D0)

inline static constexpr unsigned int Class_1_277E46A10112AAD6_TypeDefinitionIndex = 45033;

class Class_1_277E46A10112AAD6 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_1AF901C2754E3BE7(::UnityEngine::BoxCollider*& a1, ::MoleMole::Battle::MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::BoxCollider*&, ::MoleMole::Battle::MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo&))((::PBYTE)hIl2Cpp + CLASS_1_277E46A10112AAD6_METHOD_1_1AF901C2754E3BE7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5680603F69BE0FA1(::UnityEngine::BoxCollider*& a1, ::Struct_2_CA25BDF8E803FBAA& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::BoxCollider*&, ::Struct_2_CA25BDF8E803FBAA&))((::PBYTE)hIl2Cpp + CLASS_1_277E46A10112AAD6_METHOD_1_5680603F69BE0FA1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D97F272165F4487D(::UnityEngine::Vector3& a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Vector3& a3, ::MoleMole::Interaction::AxisSign& a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::MoleMole::Interaction::AxisSign&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_277E46A10112AAD6_METHOD_1_D97F272165F4487D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_E502F78AF6785BDD(::UnityEngine::BoxCollider*& a1, ::MoleMole::Interaction::AxisSign& a2, ::Struct_2_A62B8C05FE608BC8& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::BoxCollider*&, ::MoleMole::Interaction::AxisSign&, ::Struct_2_A62B8C05FE608BC8&))((::PBYTE)hIl2Cpp + CLASS_1_277E46A10112AAD6_METHOD_1_E502F78AF6785BDD_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_218FFCFFC544A6B9 Method_1_193993E25027F89F(::UnityEngine::BoxCollider*& a1, ::MoleMole::Interaction::AxisSign& a2, ::System::Single a3)
	{
		return ((::Struct_2_218FFCFFC544A6B9(*)(::UnityEngine::BoxCollider*&, ::MoleMole::Interaction::AxisSign&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_277E46A10112AAD6_METHOD_1_193993E25027F89F_OFFSET))(a1, a2, a3);
	}
};
