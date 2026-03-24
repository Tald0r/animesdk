#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30D92042DD8C86DE_Enum_3_C97B4007006C923F.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1199.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_979;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30D92042DD8C86DE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x117D3E00)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_07784BF90C472F8E_OFFSET UNITYSDK_OFFSET(0x117D3B90)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x117D3370)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x117D4280)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x117D4000)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x117D35F0)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x117D3C60)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x117D3D20)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_B6938ADF31948993_OFFSET UNITYSDK_OFFSET(0x117D36D0)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x117D3A00)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x117D3350)
#define CLASS_1_30D92042DD8C86DE_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x117D4260)
#define CLASS_1_30D92042DD8C86DE__CTOR_OFFSET UNITYSDK_OFFSET(0x117D3F30)

inline static constexpr unsigned int Class_1_30D92042DD8C86DE_TypeDefinitionIndex = 17002;

class Class_1_30D92042DD8C86DE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_30D92042DD8C86DE_Enum_3_C97B4007006C923F, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_979*>*>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_30D92042DD8C86DE_Enum_3_C97B4007006C923F>* Field_1_6; // 0x20
	::Struct_2_1862835F8661A21F_1199 Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x40
	::Il2CppArray<::Class_2_208CC9941471731A_979*>* Field_1_1; // 0x48
	::System::Int32 Field_1_4; // 0x50
	::System::Boolean Field_1_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6938ADF31948993(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_B6938ADF31948993_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_979* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_979*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_979* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_979*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_979*>* Method_1_07784BF90C472F8E()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_979*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30D92042DD8C86DE_METHOD_1_07784BF90C472F8E_OFFSET))(this);
	}
};
