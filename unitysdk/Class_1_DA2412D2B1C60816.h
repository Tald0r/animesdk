#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_871.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_35;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_DA2412D2B1C60816_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19A78DC0)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x19A78850)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19A78CF0)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x19A78B30)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_6C607FF7786A3D80_OFFSET UNITYSDK_OFFSET(0x19A78C20)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x19A78D00)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x19A78FA0)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x19A78EF0)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_C712D4587201805B_OFFSET UNITYSDK_OFFSET(0x19A79390)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19A78830)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_E5DD0AE394898247_OFFSET UNITYSDK_OFFSET(0x19A79150)
#define CLASS_1_DA2412D2B1C60816_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x19A79370)
#define CLASS_1_DA2412D2B1C60816__CTOR_OFFSET UNITYSDK_OFFSET(0x19A79080)

inline static constexpr unsigned int Class_1_DA2412D2B1C60816_TypeDefinitionIndex = 13189;

class Class_1_DA2412D2B1C60816 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x18
	::Struct_2_1862835F8661A21F_871 Field_1_0; // 0x20
	::Il2CppArray<::Class_2_208CC9941471731A_35*>* Field_1_1; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x40
	::System::Boolean Field_1_6; // 0x48
	::System::Int32 Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_35* Method_1_E5DD0AE394898247(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_35*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_E5DD0AE394898247_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_35*>* Method_1_6C607FF7786A3D80()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_35*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_6C607FF7786A3D80_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_35* Method_1_C712D4587201805B(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_35*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA2412D2B1C60816_METHOD_1_C712D4587201805B_OFFSET))(this, a1);
	}
};
