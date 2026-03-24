#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1248.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_903;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1D066AB0E9FFB824_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16C8E400)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16C8DD70)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x16C8E600)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x16C8EE50)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x16C8E0C0)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x16C8DFE0)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16C8E260)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_A4A486AADEB1B27A_OFFSET UNITYSDK_OFFSET(0x16C8E900)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16C8E320)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_C08C1C019AEA48AA_OFFSET UNITYSDK_OFFSET(0x16C8E830)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x16C8E0D0)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C8DD50)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_D4561F0320FA9D65_OFFSET UNITYSDK_OFFSET(0x16C8ED90)
#define CLASS_1_1D066AB0E9FFB824_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x16C8E810)
#define CLASS_1_1D066AB0E9FFB824__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8E530)

inline static constexpr unsigned int Class_1_1D066AB0E9FFB824_TypeDefinitionIndex = 16120;

class Class_1_1D066AB0E9FFB824 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_903*>* Field_1_1; // 0x18
	::Struct_2_1862835F8661A21F_1248 Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_903*>*>* Field_1_5; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_903* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_903*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_903*>* Method_1_C08C1C019AEA48AA()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_903*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_C08C1C019AEA48AA_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_903*>*>* Method_1_A4A486AADEB1B27A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_903*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_A4A486AADEB1B27A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_903*>* Method_1_D4561F0320FA9D65(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_903*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_D4561F0320FA9D65_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_903* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_903*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D066AB0E9FFB824_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
