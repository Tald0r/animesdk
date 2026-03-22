#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1016.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_2;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_876FA8885F2C06D7_FINALIZE_OFFSET UNITYSDK_OFFSET(0x114B9140)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x114B8B60)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_241FFDFAF734B77A_OFFSET UNITYSDK_OFFSET(0x114B9B40)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x114B9800)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x114B9070)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x114B8EB0)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_4FF5D89201DBB73C_OFFSET UNITYSDK_OFFSET(0x114B8FA0)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x114B9080)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x114B9330)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_BD09D8890FDDBF47_OFFSET UNITYSDK_OFFSET(0x114B9500)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x114B9280)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x114B8B40)
#define CLASS_1_876FA8885F2C06D7_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x114B94E0)
#define CLASS_1_876FA8885F2C06D7__CTOR_OFFSET UNITYSDK_OFFSET(0x114B9410)

inline static constexpr unsigned int Class_1_876FA8885F2C06D7_TypeDefinitionIndex = 14240;

class Class_1_876FA8885F2C06D7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_4; // 0x20
	::Struct_2_1862835F8661A21F_1016 Field_1_0; // 0x28
	::Il2CppArray<::Class_2_0A55B5A82A61DAFA_2*>* Field_1_1; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_0A55B5A82A61DAFA_2*>* Method_1_4FF5D89201DBB73C()
	{
		return ((::Il2CppArray<::Class_2_0A55B5A82A61DAFA_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_4FF5D89201DBB73C_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_0A55B5A82A61DAFA_2* Method_1_BD09D8890FDDBF47(::System::Int32 a1)
	{
		return ((::Class_2_0A55B5A82A61DAFA_2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_BD09D8890FDDBF47_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_0A55B5A82A61DAFA_2* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_0A55B5A82A61DAFA_2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_241FFDFAF734B77A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_876FA8885F2C06D7_METHOD_1_241FFDFAF734B77A_OFFSET))(this, a1);
	}
};
