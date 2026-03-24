#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30FE1CE5A1C958A6.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/BitArray256.h"

class Class_1_273278230A48923F;
class Class_1_A807D7989306A424;
namespace System { class String; }

#define CLASS_2_54A259F66D1AE872_METHOD_2_1646823F3AC53076_OFFSET UNITYSDK_OFFSET(0x76761B0)
#define CLASS_2_54A259F66D1AE872_METHOD_2_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x7676C90)
#define CLASS_2_54A259F66D1AE872_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x7676EB0)
#define CLASS_2_54A259F66D1AE872_METHOD_2_765F930F3D4791EE_OFFSET UNITYSDK_OFFSET(0x7676050)
#define CLASS_2_54A259F66D1AE872_METHOD_2_8C358ACA27856FE9_OFFSET UNITYSDK_OFFSET(0x7675E40)
#define CLASS_2_54A259F66D1AE872_METHOD_2_8D68B1A7E8C2FB84_OFFSET UNITYSDK_OFFSET(0x7675D10)
#define CLASS_2_54A259F66D1AE872_METHOD_2_9F50437DC660CB68_OFFSET UNITYSDK_OFFSET(0x7675BF0)
#define CLASS_2_54A259F66D1AE872_METHOD_2_A2C742EA46EA1C2C_OFFSET UNITYSDK_OFFSET(0x7676C10)
#define CLASS_2_54A259F66D1AE872_METHOD_2_A67BC442E9681A33_OFFSET UNITYSDK_OFFSET(0x7676DE0)
#define CLASS_2_54A259F66D1AE872_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x7675A10)
#define CLASS_2_54A259F66D1AE872_METHOD_2_F5C8BEBC0A15D104_OFFSET UNITYSDK_OFFSET(0x7675EC0)
#define CLASS_2_54A259F66D1AE872__CCTOR_OFFSET UNITYSDK_OFFSET(0x76752A0)
#define CLASS_2_54A259F66D1AE872__CTOR_OFFSET UNITYSDK_OFFSET(0x7675800)

inline static constexpr unsigned int Class_2_54A259F66D1AE872_TypeDefinitionIndex = 68348;

class Class_2_54A259F66D1AE872 : public ::Foundation::Singleton_1<::Class_2_54A259F66D1AE872*>
{
public:
	static ::UnityEngine::Rendering::BitArray256* StaticGet_Field_2_6()
	{
		return (::UnityEngine::Rendering::BitArray256*)Il2CppClass::FromTypeDefinitionIndex(Class_2_54A259F66D1AE872_TypeDefinitionIndex)->GetStaticField(0x114C0);
	}
	::Il2CppArray<::Class_1_A807D7989306A424*>* Field_2_0; // 0x10
	::Il2CppArray<::System::String*>* Field_2_2; // 0x18
	::System::String* Field_2_5; // 0x20
	::UnityEngine::Rendering::BitArray256 Field_2_1; // 0x28
	::System::Int32 Field_2_4; // 0x48
	::System::UInt32 Field_2_3; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9F50437DC660CB68(::Enum_3_30FE1CE5A1C958A6 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_9F50437DC660CB68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D68B1A7E8C2FB84(::Foundation::Unreal::FName a1, ::System::String* a2, ::UnityEngine::Color a3, ::Enum_3_30FE1CE5A1C958A6 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_8D68B1A7E8C2FB84_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_B2C52ACF9D9B435B_OFFSET))();
	}

	::System::String* Method_2_8C358ACA27856FE9(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_8C358ACA27856FE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5C8BEBC0A15D104(::System::String* a1, ::UnityEngine::Color a2, ::Enum_3_30FE1CE5A1C958A6 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_F5C8BEBC0A15D104_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_765F930F3D4791EE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_765F930F3D4791EE_OFFSET))(this);
	}

	::System::Void Method_2_1646823F3AC53076(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_1646823F3AC53076_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A2C742EA46EA1C2C(::Enum_3_30FE1CE5A1C958A6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_A2C742EA46EA1C2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A67BC442E9681A33(::Foundation::Unreal::FName a1, ::Enum_3_30FE1CE5A1C958A6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_A67BC442E9681A33_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A259F66D1AE872_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}
};
