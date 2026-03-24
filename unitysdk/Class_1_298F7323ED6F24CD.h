#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_373.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_298F7323ED6F24CD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16F25AB0)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16F254E0)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_241FFDFAF734B77A_OFFSET UNITYSDK_OFFSET(0x16F25E40)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x16F25F70)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x16F259E0)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x16F25820)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16F259F0)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16F25C90)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_BD09D8890FDDBF47_OFFSET UNITYSDK_OFFSET(0x16F262D0)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x16F25BE0)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_CC17C540BF89AFA2_OFFSET UNITYSDK_OFFSET(0x16F25910)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16F254C0)
#define CLASS_1_298F7323ED6F24CD_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x16F262B0)
#define CLASS_1_298F7323ED6F24CD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F25D70)

inline static constexpr unsigned int Class_1_298F7323ED6F24CD_TypeDefinitionIndex = 17015;

class Class_1_298F7323ED6F24CD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x20
	::Struct_2_1862835F8661A21F_373 Field_1_0; // 0x28
	::Il2CppArray<::Class_2_0A55B5A82A61DAFA_1*>* Field_1_1; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_241FFDFAF734B77A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_241FFDFAF734B77A_OFFSET))(this, a1);
	}

	::Class_2_0A55B5A82A61DAFA_1* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_0A55B5A82A61DAFA_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_0A55B5A82A61DAFA_1*>* Method_1_CC17C540BF89AFA2()
	{
		return ((::Il2CppArray<::Class_2_0A55B5A82A61DAFA_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_CC17C540BF89AFA2_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_0A55B5A82A61DAFA_1* Method_1_BD09D8890FDDBF47(::System::Int32 a1)
	{
		return ((::Class_2_0A55B5A82A61DAFA_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_298F7323ED6F24CD_METHOD_1_BD09D8890FDDBF47_OFFSET))(this, a1);
	}
};
