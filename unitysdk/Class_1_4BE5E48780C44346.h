#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1062.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_609;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4BE5E48780C44346_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E102D0)
#define CLASS_1_4BE5E48780C44346_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x18E0FA80)
#define CLASS_1_4BE5E48780C44346_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x18E105C0)
#define CLASS_1_4BE5E48780C44346_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x18E107D0)
#define CLASS_1_4BE5E48780C44346_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x18E0FD00)
#define CLASS_1_4BE5E48780C44346_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x18E10130)
#define CLASS_1_4BE5E48780C44346_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x18E101F0)
#define CLASS_1_4BE5E48780C44346_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x18E0FED0)
#define CLASS_1_4BE5E48780C44346_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18E0FA60)
#define CLASS_1_4BE5E48780C44346_METHOD_1_E622BE70AEF537B2_OFFSET UNITYSDK_OFFSET(0x18E0FDE0)
#define CLASS_1_4BE5E48780C44346_METHOD_1_F25CEF59DB6899B3_OFFSET UNITYSDK_OFFSET(0x18E10060)
#define CLASS_1_4BE5E48780C44346_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x18E105A0)
#define CLASS_1_4BE5E48780C44346__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E104D0)
#define CLASS_1_4BE5E48780C44346__CTOR_OFFSET UNITYSDK_OFFSET(0x18E10400)

inline static constexpr unsigned int Class_1_4BE5E48780C44346_TypeDefinitionIndex = 17179;

class Class_1_4BE5E48780C44346 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BE5E48780C44346_TypeDefinitionIndex)->GetStaticField(0x8BD0);
	}
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x10
	::Struct_2_1862835F8661A21F_1062 Field_1_1; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_609*>* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::Int32 Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E622BE70AEF537B2(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_E622BE70AEF537B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_609*>* Method_1_F25CEF59DB6899B3()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_609*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_F25CEF59DB6899B3_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_609* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_609*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_609* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_609*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BE5E48780C44346_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}
};
