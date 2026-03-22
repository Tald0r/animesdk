#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A55CA11900DC55FE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigTimelineCamera_CameraCurveGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_AB3BBBEB5F4FB43C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82B2ED0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_0A888ADA55827819_OFFSET UNITYSDK_OFFSET(0x82B3550)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_178EA063585DE2C4_OFFSET UNITYSDK_OFFSET(0x82B4010)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_208CCBFF1B8F62A7_1_OFFSET UNITYSDK_OFFSET(0x82B48A0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x82B4730)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_27F287B1045999E8_OFFSET UNITYSDK_OFFSET(0x82B4170)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_3FD43A1F56099F4E_OFFSET UNITYSDK_OFFSET(0x82B30D0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x82B35D0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_4ACC2F8684BE1D57_OFFSET UNITYSDK_OFFSET(0x82B4400)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_5E256ABCBB78EAD2_OFFSET UNITYSDK_OFFSET(0x82B4CE0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_6B2640071A06471E_OFFSET UNITYSDK_OFFSET(0x82B3B50)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x82B3D60)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_8E3515480CBF69B2_OFFSET UNITYSDK_OFFSET(0x82B4A60)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x82B3EF0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_9035FEE44752EB8E_OFFSET UNITYSDK_OFFSET(0x82B3FF0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x82B47E0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_B16F3EA4AD08551F_OFFSET UNITYSDK_OFFSET(0x82B3910)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_BD44DF08D4544D4A_OFFSET UNITYSDK_OFFSET(0x82B2F90)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_D8FD81FB74270BB0_1_OFFSET UNITYSDK_OFFSET(0x82B4670)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_D8FD81FB74270BB0_OFFSET UNITYSDK_OFFSET(0x82B3E30)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_DF64B90BA25AAE64_OFFSET UNITYSDK_OFFSET(0x82B42B0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_F054EB1DA5D30571_OFFSET UNITYSDK_OFFSET(0x82B4540)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_F26109FDE858206E_OFFSET UNITYSDK_OFFSET(0x82B48C0)
#define CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x82B4750)
#define CLASS_1_AB3BBBEB5F4FB43C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x82B2DA0)
#define CLASS_1_AB3BBBEB5F4FB43C__CTOR_OFFSET UNITYSDK_OFFSET(0x82B2C00)

inline static constexpr unsigned int Class_1_AB3BBBEB5F4FB43C_TypeDefinitionIndex = 54382;

class Class_1_AB3BBBEB5F4FB43C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* Field_1_0; // 0x10
	::System::Single Field_1_7; // 0x18
	::UnityEngine::Quaternion Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_4; // 0x39
	::System::Single Field_1_3; // 0x3C
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor(::MoleMole::ConfigTimelineCamera_CameraCurveGroup* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3, ::System::Nullable_1<::System::Single> a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineCamera_CameraCurveGroup*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3, ::System::Nullable_1<::System::Single> a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_BD44DF08D4544D4A(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_BD44DF08D4544D4A_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_A55CA11900DC55FE Method_1_3FD43A1F56099F4E(::System::Single a1, ::Struct_2_A55CA11900DC55FE& a2)
	{
		return ((::Struct_2_A55CA11900DC55FE(*)(::PVOID, ::System::Single, ::Struct_2_A55CA11900DC55FE&))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_3FD43A1F56099F4E_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_0A888ADA55827819()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_0A888ADA55827819_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_B16F3EA4AD08551F(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_B16F3EA4AD08551F_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B2640071A06471E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_6B2640071A06471E_OFFSET))(this, a1);
	}

	::System::Single Method_1_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D8FD81FB74270BB0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_D8FD81FB74270BB0_OFFSET))(this);
	}

	::System::Boolean Method_1_9035FEE44752EB8E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_9035FEE44752EB8E_OFFSET))(this);
	}

	::Struct_2_A55CA11900DC55FE Method_1_178EA063585DE2C4(::System::Single a1, ::Struct_2_A55CA11900DC55FE& a2)
	{
		return ((::Struct_2_A55CA11900DC55FE(*)(::PVOID, ::System::Single, ::Struct_2_A55CA11900DC55FE&))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_178EA063585DE2C4_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_27F287B1045999E8(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_27F287B1045999E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_DF64B90BA25AAE64(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_DF64B90BA25AAE64_OFFSET))(this, a1);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Single Method_1_F054EB1DA5D30571(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_F054EB1DA5D30571_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D8FD81FB74270BB0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_D8FD81FB74270BB0_1_OFFSET))(this);
	}

	::System::Single Method_1_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Single Method_1_208CCBFF1B8F62A7_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_208CCBFF1B8F62A7_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F26109FDE858206E(::System::Single a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Nullable_1<::UnityEngine::Vector3> a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_F26109FDE858206E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Quaternion Method_1_8E3515480CBF69B2(::System::Single a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Nullable_1<::UnityEngine::Quaternion> a5)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_8E3515480CBF69B2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_A55CA11900DC55FE Method_1_5E256ABCBB78EAD2(::System::Single a1)
	{
		return ((::Struct_2_A55CA11900DC55FE(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_5E256ABCBB78EAD2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_4ACC2F8684BE1D57(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB3BBBEB5F4FB43C_METHOD_1_4ACC2F8684BE1D57_OFFSET))(this, a1);
	}
};
