#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_359.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_756;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E22241B3145F3FC2_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13C77700)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x13C77150)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x13C77A00)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x13C774A0)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x13C773C0)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x13C77640)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x13C77830)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x13C774B0)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x13C77130)
#define CLASS_1_E22241B3145F3FC2_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x13C779E0)
#define CLASS_1_E22241B3145F3FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x13C77910)

inline static constexpr unsigned int Class_1_E22241B3145F3FC2_TypeDefinitionIndex = 13982;

class Class_1_E22241B3145F3FC2 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::Struct_2_1862835F8661A21F_359 Field_1_0; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_756*>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x38
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_756* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_756*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E22241B3145F3FC2_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}
};
