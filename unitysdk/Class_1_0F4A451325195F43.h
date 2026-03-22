#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_621.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_437;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0F4A451325195F43_FINALIZE_OFFSET UNITYSDK_OFFSET(0x122877B0)
#define CLASS_1_0F4A451325195F43_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x12287120)
#define CLASS_1_0F4A451325195F43_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x122879D0)
#define CLASS_1_0F4A451325195F43_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x12287470)
#define CLASS_1_0F4A451325195F43_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x12287390)
#define CLASS_1_0F4A451325195F43_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x12287610)
#define CLASS_1_0F4A451325195F43_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x122876D0)
#define CLASS_1_0F4A451325195F43_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x12287480)
#define CLASS_1_0F4A451325195F43_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x12287100)
#define CLASS_1_0F4A451325195F43_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x122879B0)
#define CLASS_1_0F4A451325195F43__CTOR_OFFSET UNITYSDK_OFFSET(0x122878E0)

inline static constexpr unsigned int Class_1_0F4A451325195F43_TypeDefinitionIndex = 12071;

class Class_1_0F4A451325195F43 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_437*>* Field_1_1; // 0x20
	::Struct_2_1862835F8661A21F_621 Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_437* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_437*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0F4A451325195F43_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}
};
