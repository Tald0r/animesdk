#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_A3B5141C858708A0_7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_501;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_088288BAC3B00586_FINALIZE_OFFSET UNITYSDK_OFFSET(0x12933DA0)
#define CLASS_1_088288BAC3B00586_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x12933680)
#define CLASS_1_088288BAC3B00586_METHOD_1_19EDEFB0D11D3816_OFFSET UNITYSDK_OFFSET(0x12934490)
#define CLASS_1_088288BAC3B00586_METHOD_1_21D62FE4F5F5EF41_OFFSET UNITYSDK_OFFSET(0x129343A0)
#define CLASS_1_088288BAC3B00586_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x12933A60)
#define CLASS_1_088288BAC3B00586_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x12933980)
#define CLASS_1_088288BAC3B00586_METHOD_1_4CA9137C0F9615CB_OFFSET UNITYSDK_OFFSET(0x129344C0)
#define CLASS_1_088288BAC3B00586_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x12933C00)
#define CLASS_1_088288BAC3B00586_METHOD_1_87E60D0B8728CCD0_OFFSET UNITYSDK_OFFSET(0x12934010)
#define CLASS_1_088288BAC3B00586_METHOD_1_9CD4AF3CB324B49E_OFFSET UNITYSDK_OFFSET(0x12934320)
#define CLASS_1_088288BAC3B00586_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x12933CC0)
#define CLASS_1_088288BAC3B00586_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x12933A70)
#define CLASS_1_088288BAC3B00586_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x12933660)
#define CLASS_1_088288BAC3B00586_METHOD_1_F0A356DC2B4C822B_OFFSET UNITYSDK_OFFSET(0x12933F20)
#define CLASS_1_088288BAC3B00586_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x12933FF0)
#define CLASS_1_088288BAC3B00586_METHOD_1_F9D633AE4D1D1DF5_OFFSET UNITYSDK_OFFSET(0x12934850)
#define CLASS_1_088288BAC3B00586__CTOR_OFFSET UNITYSDK_OFFSET(0x12933ED0)

inline static constexpr unsigned int Class_1_088288BAC3B00586_TypeDefinitionIndex = 12194;

class Class_1_088288BAC3B00586 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_3; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_501*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_4; // 0x28
	::Struct_2_A3B5141C858708A0_7 Field_1_0; // 0x30
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_FINALIZE_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_501*>* Method_1_F0A356DC2B4C822B()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_501*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_F0A356DC2B4C822B_OFFSET))(this);
	}

	::System::Void Method_1_9CD4AF3CB324B49E(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_9CD4AF3CB324B49E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21D62FE4F5F5EF41(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_21D62FE4F5F5EF41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19EDEFB0D11D3816(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_19EDEFB0D11D3816_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Int32 Method_1_F9D633AE4D1D1DF5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_F9D633AE4D1D1DF5_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_4CA9137C0F9615CB(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_4CA9137C0F9615CB_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_501* Method_1_87E60D0B8728CCD0(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_501*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_088288BAC3B00586_METHOD_1_87E60D0B8728CCD0_OFFSET))(this, a1);
	}
};
