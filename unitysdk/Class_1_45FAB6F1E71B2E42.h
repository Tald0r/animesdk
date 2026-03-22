#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_474.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_380;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_45FAB6F1E71B2E42_FINALIZE_OFFSET UNITYSDK_OFFSET(0x12BC41C0)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x12BC3BF0)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_230C37A09C8781DE_OFFSET UNITYSDK_OFFSET(0x12BC47F0)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x12BC40F0)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x12BC3E70)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x12BC3F60)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x12BC4100)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x12BC43A0)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x12BC42F0)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_CB13AC180D6E1AC9_OFFSET UNITYSDK_OFFSET(0x12BC4760)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x12BC3BD0)
#define CLASS_1_45FAB6F1E71B2E42_METHOD_1_E5DD0AE394898247_OFFSET UNITYSDK_OFFSET(0x12BC4570)
#define CLASS_1_45FAB6F1E71B2E42__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC4480)

inline static constexpr unsigned int Class_1_45FAB6F1E71B2E42_TypeDefinitionIndex = 11443;

class Class_1_45FAB6F1E71B2E42 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x18
	::Struct_2_1862835F8661A21F_474 Field_1_0; // 0x20
	::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_2_208CC9941471731A_380*>* Field_1_5; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_380*>* Field_1_1; // 0x40
	::System::Boolean Field_1_6; // 0x48
	::System::Int32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_380* Method_1_E5DD0AE394898247(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_380*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_E5DD0AE394898247_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_380* Method_1_CB13AC180D6E1AC9(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_380*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_CB13AC180D6E1AC9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_380*>* Method_1_230C37A09C8781DE()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_380*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_230C37A09C8781DE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45FAB6F1E71B2E42_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
