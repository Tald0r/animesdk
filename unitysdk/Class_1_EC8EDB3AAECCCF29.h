#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_901.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_700;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EC8EDB3AAECCCF29_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1460EA10)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_003784440330FE39_OFFSET UNITYSDK_OFFSET(0x1460EE40)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1460E2E0)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1460EF30)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x1460F140)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1460E6C0)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1460E5D0)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1460E870)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_A84A19AB11963B69_OFFSET UNITYSDK_OFFSET(0x1460EC20)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1460E930)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_C69AFE5892863775_OFFSET UNITYSDK_OFFSET(0x1460E6D0)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1460E2C0)
#define CLASS_1_EC8EDB3AAECCCF29_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1460EF10)
#define CLASS_1_EC8EDB3AAECCCF29__CTOR_OFFSET UNITYSDK_OFFSET(0x1460EB50)

inline static constexpr unsigned int Class_1_EC8EDB3AAECCCF29_TypeDefinitionIndex = 13518;

class Class_1_EC8EDB3AAECCCF29 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_700*>*>* Field_1_4; // 0x20
	::Struct_2_1862835F8661A21F_901 Field_1_0; // 0x28
	::Il2CppArray<::Class_2_208CC9941471731A_700*>* Field_1_1; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C69AFE5892863775(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_C69AFE5892863775_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_700*>* Method_1_A84A19AB11963B69(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_700*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_A84A19AB11963B69_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_700* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_700*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_700*>* Method_1_003784440330FE39()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_700*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_003784440330FE39_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_700* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_700*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC8EDB3AAECCCF29_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}
};
