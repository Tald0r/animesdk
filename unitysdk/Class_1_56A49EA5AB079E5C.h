#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A37120368FD2FC8_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7040409A6427730D;
class Class_2_208CC9941471731A_283;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56A49EA5AB079E5C_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x6B981B0)
#define CLASS_1_56A49EA5AB079E5C_METHOD_1_670F9011F4A497FF_OFFSET UNITYSDK_OFFSET(0x6B97E50)
#define CLASS_1_56A49EA5AB079E5C_METHOD_1_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x6B98780)
#define CLASS_1_56A49EA5AB079E5C_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x6B98450)
#define CLASS_1_56A49EA5AB079E5C_METHOD_1_9AEDC2AD0CF5DF4B_OFFSET UNITYSDK_OFFSET(0x6B98DD0)
#define CLASS_1_56A49EA5AB079E5C_METHOD_1_9CD607631367DD7F_OFFSET UNITYSDK_OFFSET(0x6B984D0)
#define CLASS_1_56A49EA5AB079E5C__CTOR_OFFSET UNITYSDK_OFFSET(0x6B97E40)

inline static constexpr unsigned int Class_1_56A49EA5AB079E5C_TypeDefinitionIndex = 63638;

class Class_1_56A49EA5AB079E5C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_1A37120368FD2FC8_2>* Field_1_3; // 0x10
	::MoleMole::UICinemaPlayPageController* Field_1_0; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_1A37120368FD2FC8_2>* Field_1_4; // 0x28
	::Class_2_208CC9941471731A_283* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7040409A6427730D*>* Field_1_5; // 0x38
	::System::Int32 Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A49EA5AB079E5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_670F9011F4A497FF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56A49EA5AB079E5C_METHOD_1_670F9011F4A497FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A49EA5AB079E5C_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A49EA5AB079E5C_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_1_9CD607631367DD7F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56A49EA5AB079E5C_METHOD_1_9CD607631367DD7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A49EA5AB079E5C_METHOD_1_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Void Method_1_9AEDC2AD0CF5DF4B(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_56A49EA5AB079E5C_METHOD_1_9AEDC2AD0CF5DF4B_OFFSET))(this, a1, a2);
	}
};
