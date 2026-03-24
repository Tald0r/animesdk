#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_CB6B251D920B4152_1.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_280;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_F100949E1BC87257_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1690E8C0)
#define CLASS_1_F100949E1BC87257_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1690E4A0)
#define CLASS_1_F100949E1BC87257_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1690E7F0)
#define CLASS_1_F100949E1BC87257_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1690E710)
#define CLASS_1_F100949E1BC87257_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1690E800)
#define CLASS_1_F100949E1BC87257_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1690EAA0)
#define CLASS_1_F100949E1BC87257_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1690E9F0)
#define CLASS_1_F100949E1BC87257_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1690E480)
#define CLASS_1_F100949E1BC87257_METHOD_1_DCB9ED5798608302_OFFSET UNITYSDK_OFFSET(0x1690EC70)
#define CLASS_1_F100949E1BC87257_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1690EC50)
#define CLASS_1_F100949E1BC87257__CTOR_OFFSET UNITYSDK_OFFSET(0x1690EB80)

inline static constexpr unsigned int Class_1_F100949E1BC87257_TypeDefinitionIndex = 13582;

class Class_1_F100949E1BC87257 : public ::System::Object
{
public:
	::Struct_2_CB6B251D920B4152_1 Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_2; // 0x30
	::Il2CppArray<::Class_2_208CC9941471731A_280*>* Field_1_1; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_280* Method_1_DCB9ED5798608302(::System::UInt32 a1)
	{
		return ((::Class_2_208CC9941471731A_280*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F100949E1BC87257_METHOD_1_DCB9ED5798608302_OFFSET))(this, a1);
	}
};
