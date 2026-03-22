#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_1862835F8661A21F_979.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_14;
class Class_1_1AE78019B8A93C46_Class_1_81585F71FCC163D4;
class Class_2_208CC9941471731A_671;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_1AE78019B8A93C46_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A04C50)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x11A033D0)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x11A04FA0)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x11A03650)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_739DDBE07D78364C_OFFSET UNITYSDK_OFFSET(0x11A03740)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11A04AB0)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_8C6B1D44AAA690DF_OFFSET UNITYSDK_OFFSET(0x11A04EB0)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11A04B70)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_C0D14E1EE42F5DBB_OFFSET UNITYSDK_OFFSET(0x11A051B0)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x11A03750)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x11A033B0)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_D3FE352853BCDA2B_OFFSET UNITYSDK_OFFSET(0x11A038F0)
#define CLASS_1_1AE78019B8A93C46_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x11A04F80)
#define CLASS_1_1AE78019B8A93C46__CTOR_OFFSET UNITYSDK_OFFSET(0x11A04D80)

inline static constexpr unsigned int Class_1_1AE78019B8A93C46_TypeDefinitionIndex = 13934;

class Class_1_1AE78019B8A93C46 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1AE78019B8A93C46_Class_1_81585F71FCC163D4*>* Field_1_6; // 0x10
	::Struct_2_1862835F8661A21F_979 Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_671*>* Field_1_1; // 0x40
	::System::Boolean Field_1_5; // 0x48
	::System::Int32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_739DDBE07D78364C(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_739DDBE07D78364C_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_FINALIZE_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_671*>* Method_1_8C6B1D44AAA690DF()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_671*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_8C6B1D44AAA690DF_OFFSET))(this);
	}

	::System::Void Method_1_D3FE352853BCDA2B(::System::Func_2<::Class_0_16E4307DCC419505_14*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Class_0_16E4307DCC419505_14*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_D3FE352853BCDA2B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_671* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_671*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_671* Method_1_C0D14E1EE42F5DBB(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Byte a3, ::System::Int32 a4)
	{
		return ((::Class_2_208CC9941471731A_671*(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1AE78019B8A93C46_METHOD_1_C0D14E1EE42F5DBB_OFFSET))(this, a1, a2, a3, a4);
	}
};
