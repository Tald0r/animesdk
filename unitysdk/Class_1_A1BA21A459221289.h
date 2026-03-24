#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_198.h"
#include "unitysdk/System/Object.h"

class Class_2_FF0FCE0FC8EC71DD;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A1BA21A459221289_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1728E0C0)
#define CLASS_1_A1BA21A459221289_METHOD_1_1362C235A7584C9D_OFFSET UNITYSDK_OFFSET(0x1728E510)
#define CLASS_1_A1BA21A459221289_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1728D970)
#define CLASS_1_A1BA21A459221289_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x1728E600)
#define CLASS_1_A1BA21A459221289_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1728DDA0)
#define CLASS_1_A1BA21A459221289_METHOD_1_5F6BDF3FF43F02F0_OFFSET UNITYSDK_OFFSET(0x1728E880)
#define CLASS_1_A1BA21A459221289_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1728DDB0)
#define CLASS_1_A1BA21A459221289_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1728E000)
#define CLASS_1_A1BA21A459221289_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1728E300)
#define CLASS_1_A1BA21A459221289_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1728E250)
#define CLASS_1_A1BA21A459221289_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1728D950)
#define CLASS_1_A1BA21A459221289_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1728DC50)
#define CLASS_1_A1BA21A459221289_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1728E5E0)
#define CLASS_1_A1BA21A459221289__CTOR_OFFSET UNITYSDK_OFFSET(0x1728E3E0)

inline static constexpr unsigned int Class_1_A1BA21A459221289_TypeDefinitionIndex = 16154;

class Class_1_A1BA21A459221289 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_198 Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_2_FF0FCE0FC8EC71DD*>*>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x30
	::Il2CppArray<::Class_2_FF0FCE0FC8EC71DD*>* Field_1_1; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_FF0FCE0FC8EC71DD* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_FF0FCE0FC8EC71DD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::Class_2_FF0FCE0FC8EC71DD* Method_1_5F6BDF3FF43F02F0(::System::Int32 a1)
	{
		return ((::Class_2_FF0FCE0FC8EC71DD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_5F6BDF3FF43F02F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_FF0FCE0FC8EC71DD*>* Method_1_1362C235A7584C9D()
	{
		return ((::Il2CppArray<::Class_2_FF0FCE0FC8EC71DD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1BA21A459221289_METHOD_1_1362C235A7584C9D_OFFSET))(this);
	}
};
