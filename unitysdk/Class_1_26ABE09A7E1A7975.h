#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }

#define CLASS_1_26ABE09A7E1A7975_METHOD_1_0023B7142326EA83_OFFSET UNITYSDK_OFFSET(0x8D8AE80)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_42904F96A1614DF3_OFFSET UNITYSDK_OFFSET(0x8D8AFF0)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_44DC9C5CAE716ADB_OFFSET UNITYSDK_OFFSET(0x8D8DEC0)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8D8BED0)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_619EB9D0A130FC07_OFFSET UNITYSDK_OFFSET(0x8D8DA20)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_6B602D26F4A563FD_OFFSET UNITYSDK_OFFSET(0x8D89DE0)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_6C17EF9ADC01880B_OFFSET UNITYSDK_OFFSET(0x8D8BCF0)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_7B3C4E6DBC38AE4C_OFFSET UNITYSDK_OFFSET(0x8D8F670)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_94C3C0E802BE0C13_OFFSET UNITYSDK_OFFSET(0x8D8A030)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_9658D39BC8073F85_OFFSET UNITYSDK_OFFSET(0x8D8CA70)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_A9BFB029A1F96FC1_1_OFFSET UNITYSDK_OFFSET(0x8D8E2D0)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_A9BFB029A1F96FC1_OFFSET UNITYSDK_OFFSET(0x8D8EAE0)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_ADE3F96B60896940_OFFSET UNITYSDK_OFFSET(0x8D8AA80)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_AE3B9D67868ED9EA_OFFSET UNITYSDK_OFFSET(0x8D8F460)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_B5D56222CC130EBB_OFFSET UNITYSDK_OFFSET(0x8D8DC20)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_BABE6393CD171247_OFFSET UNITYSDK_OFFSET(0x8D8BF30)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_BC22E97ED63A9182_OFFSET UNITYSDK_OFFSET(0x8D8AC30)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_D84A8566ED9A4DE8_OFFSET UNITYSDK_OFFSET(0x8D8B180)
#define CLASS_1_26ABE09A7E1A7975_METHOD_1_F83060A52AA5CF44_OFFSET UNITYSDK_OFFSET(0x8D8EF10)
#define CLASS_1_26ABE09A7E1A7975__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D897B0)

inline static constexpr unsigned int Class_1_26ABE09A7E1A7975_TypeDefinitionIndex = 36649;

class Class_1_26ABE09A7E1A7975 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26ABE09A7E1A7975_TypeDefinitionIndex)->GetStaticField(0x3CEF0);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26ABE09A7E1A7975_TypeDefinitionIndex)->GetStaticField(0x3CEF8);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26ABE09A7E1A7975_TypeDefinitionIndex)->GetStaticField(0x3CF00);
	}
	static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26ABE09A7E1A7975_TypeDefinitionIndex)->GetStaticField(0x3CF08);
	}
	static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26ABE09A7E1A7975_TypeDefinitionIndex)->GetStaticField(0x3CF10);
	}
	static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26ABE09A7E1A7975_TypeDefinitionIndex)->GetStaticField(0x3CF18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_94C3C0E802BE0C13(::UnityEngine::Vector4 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::UnityEngine::Color a5)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4, ::System::Single, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_94C3C0E802BE0C13_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_BC22E97ED63A9182(::UnityEngine::Vector4 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_BC22E97ED63A9182_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0023B7142326EA83(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_0023B7142326EA83_OFFSET))(a1);
	}

	static ::Il2CppArray<::UnityEngine::Vector4>* Method_1_6B602D26F4A563FD(::System::Int32 a1)
	{
		return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_6B602D26F4A563FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_42904F96A1614DF3(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_42904F96A1614DF3_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C17EF9ADC01880B(::UnityEngine::Plane a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::UnityEngine::Color a5)
	{
		return ((::System::Void(*)(::UnityEngine::Plane, ::System::Single, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_6C17EF9ADC01880B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_BABE6393CD171247(::UnityEngine::Vector4 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_BABE6393CD171247_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9658D39BC8073F85(::UnityEngine::Matrix4x4 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Color a6)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_9658D39BC8073F85_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_ADE3F96B60896940(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_ADE3F96B60896940_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Material* Method_1_619EB9D0A130FC07()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_619EB9D0A130FC07_OFFSET))();
	}

	static ::System::Void Method_1_D84A8566ED9A4DE8(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_D84A8566ED9A4DE8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B5D56222CC130EBB(::UnityEngine::Vector4 a1, ::System::Single a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_B5D56222CC130EBB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_44DC9C5CAE716ADB(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_44DC9C5CAE716ADB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A9BFB029A1F96FC1(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_A9BFB029A1F96FC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F83060A52AA5CF44(::UnityEngine::Vector4 a1, ::System::Single a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_F83060A52AA5CF44_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A9BFB029A1F96FC1_1(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_A9BFB029A1F96FC1_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE3B9D67868ED9EA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_AE3B9D67868ED9EA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7B3C4E6DBC38AE4C(::UnityEngine::Matrix4x4 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26ABE09A7E1A7975_METHOD_1_7B3C4E6DBC38AE4C_OFFSET))(a1, a2);
	}
};
