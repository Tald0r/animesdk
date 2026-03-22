#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D452FA003157C19_Class_2_2B2DA72811ABBD65.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_0447711EBE2A049A_OFFSET UNITYSDK_OFFSET(0xD363FD0)
#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_805402183FCBBDCB_OFFSET UNITYSDK_OFFSET(0xD363B00)
#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xD363EF0)
#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_9FCF6E4AC6BAD4E7_OFFSET UNITYSDK_OFFSET(0xD363AF0)
#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD363FF0)
#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD363F60)
#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_D760E44660A9C0B6_OFFSET UNITYSDK_OFFSET(0xD363BC0)
#define CLASS_3_D6FF3D7A63AE102F_METHOD_3_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xD363FE0)
#define CLASS_3_D6FF3D7A63AE102F__CTOR_OFFSET UNITYSDK_OFFSET(0xD363A20)

inline static constexpr unsigned int Class_3_D6FF3D7A63AE102F_TypeDefinitionIndex = 38008;

class Class_3_D6FF3D7A63AE102F : public ::Class_1_3D452FA003157C19_Class_2_2B2DA72811ABBD65
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt16>* Field_3_1; // 0x28
	::System::String* Field_3_0; // 0x30

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt16>* Method_3_9FCF6E4AC6BAD4E7()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_9FCF6E4AC6BAD4E7_OFFSET))(this);
	}

	::System::Void Method_3_805402183FCBBDCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_805402183FCBBDCB_OFFSET))(this);
	}

	::System::Void Method_3_D760E44660A9C0B6(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_D760E44660A9C0B6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_0447711EBE2A049A(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_0447711EBE2A049A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FF3D7A63AE102F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
