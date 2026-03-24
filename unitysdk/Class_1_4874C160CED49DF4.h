#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_8D3BE177805F6B96_5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_250;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4874C160CED49DF4_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15F01F60)
#define CLASS_1_4874C160CED49DF4_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x15F01540)
#define CLASS_1_4874C160CED49DF4_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x15F01980)
#define CLASS_1_4874C160CED49DF4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x15F01BB0)
#define CLASS_1_4874C160CED49DF4_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15F01DC0)
#define CLASS_1_4874C160CED49DF4_METHOD_1_87E60D0B8728CCD0_OFFSET UNITYSDK_OFFSET(0x15F02690)
#define CLASS_1_4874C160CED49DF4_METHOD_1_AFBA597D3FD10F69_OFFSET UNITYSDK_OFFSET(0x15F021B0)
#define CLASS_1_4874C160CED49DF4_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15F01E80)
#define CLASS_1_4874C160CED49DF4_METHOD_1_B20C75CF8E6C852E_OFFSET UNITYSDK_OFFSET(0x15F025C0)
#define CLASS_1_4874C160CED49DF4_METHOD_1_BD917F4EC8B82D68_OFFSET UNITYSDK_OFFSET(0x15F01BC0)
#define CLASS_1_4874C160CED49DF4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x15F01520)
#define CLASS_1_4874C160CED49DF4_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x15F01840)
#define CLASS_1_4874C160CED49DF4_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x15F025A0)
#define CLASS_1_4874C160CED49DF4__CTOR_OFFSET UNITYSDK_OFFSET(0x15F020F0)

inline static constexpr unsigned int Class_1_4874C160CED49DF4_TypeDefinitionIndex = 10760;

class Class_1_4874C160CED49DF4 : public ::System::Object
{
public:
	::Struct_2_8D3BE177805F6B96_5 Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_250*>*>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_2; // 0x30
	::Il2CppArray<::Class_2_208CC9941471731A_250*>* Field_1_1; // 0x38
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_3; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_BD917F4EC8B82D68(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_BD917F4EC8B82D68_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_250* Method_1_AFBA597D3FD10F69(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_250*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_AFBA597D3FD10F69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_250*>* Method_1_B20C75CF8E6C852E()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_250*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_B20C75CF8E6C852E_OFFSET))(this);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_250* Method_1_87E60D0B8728CCD0(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_250*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4874C160CED49DF4_METHOD_1_87E60D0B8728CCD0_OFFSET))(this, a1);
	}
};
