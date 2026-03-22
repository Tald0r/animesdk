#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_26.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/System/Object.h"

class Class_1_8111D94208AF9330;
class Class_1_986F52381DF139E6;
class Class_1_BE6BF7909AD9D940;
class Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455;
class Class_3_028B9BAC07BE632B;
class Class_3_1F0B390B50451710;
class Class_3_5D6E6A4B36F53E3B;
class Class_3_9F091E965E210217_18;
class Class_3_EB14F0C9B3CB407C;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T> class Class_1_B81AB3851AD916CA;

#define CLASS_1_A319EF31CA60026F_METHOD_1_03800C39F686B8A4_OFFSET UNITYSDK_OFFSET(0xBA5C610)
#define CLASS_1_A319EF31CA60026F_METHOD_1_247F7BF3E8CC157B_OFFSET UNITYSDK_OFFSET(0xBA5B510)
#define CLASS_1_A319EF31CA60026F_METHOD_1_2C80AFC3086178D3_OFFSET UNITYSDK_OFFSET(0xBA5CDD0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_35DA77D0A6FF0B56_OFFSET UNITYSDK_OFFSET(0xBA5E700)
#define CLASS_1_A319EF31CA60026F_METHOD_1_3A2A7F8174D40CFE_OFFSET UNITYSDK_OFFSET(0xBA5B490)
#define CLASS_1_A319EF31CA60026F_METHOD_1_416E986233243C96_OFFSET UNITYSDK_OFFSET(0xBA5B9B0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_47592B6D92546F64_OFFSET UNITYSDK_OFFSET(0xBA5CFB0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_4B87C08F0CA83B95_OFFSET UNITYSDK_OFFSET(0xBA5AFE0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_61E5001CB58B08F0_OFFSET UNITYSDK_OFFSET(0xBA5AB40)
#define CLASS_1_A319EF31CA60026F_METHOD_1_920D8AA0BA462CC3_OFFSET UNITYSDK_OFFSET(0xBA5B7D0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_99A5531F4A7DF520_OFFSET UNITYSDK_OFFSET(0xBA5B750)
#define CLASS_1_A319EF31CA60026F_METHOD_1_A4F0C853CFCB06F4_OFFSET UNITYSDK_OFFSET(0xBA5C9F0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_AF96870E18CAAD4E_OFFSET UNITYSDK_OFFSET(0xBA5C970)
#define CLASS_1_A319EF31CA60026F_METHOD_1_D0F4F710AB4B954E_OFFSET UNITYSDK_OFFSET(0xBA5C0F0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_D9EAE2CFA3709229_OFFSET UNITYSDK_OFFSET(0xBA5D190)
#define CLASS_1_A319EF31CA60026F_METHOD_1_F71CF3EED64402AC_OFFSET UNITYSDK_OFFSET(0xBA5DF50)
#define CLASS_1_A319EF31CA60026F__CTOR_OFFSET UNITYSDK_OFFSET(0xBA5AB30)

inline static constexpr unsigned int Class_1_A319EF31CA60026F_TypeDefinitionIndex = 64691;

class Class_1_A319EF31CA60026F : public ::System::Object
{
public:
	::System::Action_3<::System::UInt32, ::MoleMole::InLevelAvatarDataItem*, ::MoleMole::InLevelBuddyDataItem*>* Field_1_10; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_986F52381DF139E6*>* Field_1_8; // 0x20
	::System::String* Field_1_3; // 0x28
	::Class_3_5D6E6A4B36F53E3B* Field_1_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8111D94208AF9330*>* Field_1_9; // 0x38
	::MoleMole::Config::CharacterAliveState Field_1_12; // 0x40
	::System::UInt32 Field_1_6; // 0x44
	::Enum_3_0A3761FE34514D6C_26 Field_1_5; // 0x48
	::System::UInt32 Field_1_7; // 0x4C
	::System::UInt64 Field_1_1; // 0x50
	::System::UInt16 Field_1_4; // 0x58
	::System::UInt32 Field_1_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_61E5001CB58B08F0(::MoleMole::InLevelBuddyDataItem* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_61E5001CB58B08F0_OFFSET))(a1, a2);
	}

	::System::Void Method_1_4B87C08F0CA83B95(::MoleMole::InLevelAvatarDataItem* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_4B87C08F0CA83B95_OFFSET))(this, a1, a2);
	}

	::Class_1_BE6BF7909AD9D940* Method_1_3A2A7F8174D40CFE(::System::UInt32 a1)
	{
		return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_3A2A7F8174D40CFE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_99A5531F4A7DF520(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_99A5531F4A7DF520_OFFSET))(this, a1);
	}

	::Class_1_BE6BF7909AD9D940* Method_1_920D8AA0BA462CC3(::System::UInt32 a1)
	{
		return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_920D8AA0BA462CC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_416E986233243C96(::MoleMole::TeamDataItem* a1, ::MoleMole::InLevelAvatarDataItem* a2, ::Class_1_B81AB3851AD916CA<::Class_3_1F0B390B50451710*>* a3, ::Class_3_9F091E965E210217_18* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*, ::MoleMole::InLevelAvatarDataItem*, ::Class_1_B81AB3851AD916CA<::Class_3_1F0B390B50451710*>*, ::Class_3_9F091E965E210217_18*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_416E986233243C96_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_AF96870E18CAAD4E(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_AF96870E18CAAD4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4F0C853CFCB06F4(::Class_3_EB14F0C9B3CB407C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EB14F0C9B3CB407C*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_A4F0C853CFCB06F4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_2C80AFC3086178D3(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_2C80AFC3086178D3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455*>* Method_1_D0F4F710AB4B954E(::Class_1_B81AB3851AD916CA<::Class_3_1F0B390B50451710*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455*>*(*)(::PVOID, ::Class_1_B81AB3851AD916CA<::Class_3_1F0B390B50451710*>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_D0F4F710AB4B954E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_47592B6D92546F64(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_47592B6D92546F64_OFFSET))(this, a1);
	}

	::Class_1_986F52381DF139E6* Method_1_247F7BF3E8CC157B(::System::UInt32 a1)
	{
		return ((::Class_1_986F52381DF139E6*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_247F7BF3E8CC157B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EAE2CFA3709229(::Class_3_028B9BAC07BE632B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_028B9BAC07BE632B*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_D9EAE2CFA3709229_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_F71CF3EED64402AC(::MoleMole::InLevelBuddyDataItem* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_F71CF3EED64402AC_OFFSET))(a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_35DA77D0A6FF0B56(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_35DA77D0A6FF0B56_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03800C39F686B8A4(::MoleMole::TeamDataItem* a1, ::System::Int32 a2, ::MoleMole::InLevelAvatarDataItem* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamDataItem*, ::System::Int32, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_03800C39F686B8A4_OFFSET))(this, a1, a2, a3, a4);
	}
};
