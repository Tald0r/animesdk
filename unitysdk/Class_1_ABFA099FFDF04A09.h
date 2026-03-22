#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_132;
class Class_1_43BD383C98B4C0C5_18;
class Class_1_9E50DA0647A3ACF0;
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ABFA099FFDF04A09_METHOD_1_14A201C539FE1E41_OFFSET UNITYSDK_OFFSET(0x92DE760)
#define CLASS_1_ABFA099FFDF04A09_METHOD_1_A8E596AFB98D3C08_OFFSET UNITYSDK_OFFSET(0x92DE7D0)
#define CLASS_1_ABFA099FFDF04A09_METHOD_1_F07CCE27AA8B92E1_OFFSET UNITYSDK_OFFSET(0x92DE890)
#define CLASS_1_ABFA099FFDF04A09__CTOR_OFFSET UNITYSDK_OFFSET(0x92DE4F0)

inline static constexpr unsigned int Class_1_ABFA099FFDF04A09_TypeDefinitionIndex = 49282;

class Class_1_ABFA099FFDF04A09 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_43BD383C98B4C0C5_18*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9E50DA0647A3ACF0*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E50DA0647A3ACF0*>* Field_1_5; // 0x30
	::MoleMole::UIWindowController* Field_1_0; // 0x38
	::System::UInt32 Field_1_6; // 0x40

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::System::Action_1<::Class_1_ABFA099FFDF04A09*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Action_1<::Class_1_ABFA099FFDF04A09*>*))((::PBYTE)hIl2Cpp + CLASS_1_ABFA099FFDF04A09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_14A201C539FE1E41(::System::String* a1, ::Enum_3_D6C884A69AACE3AE a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_D6C884A69AACE3AE))((::PBYTE)hIl2Cpp + CLASS_1_ABFA099FFDF04A09_METHOD_1_14A201C539FE1E41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8E596AFB98D3C08(::Class_0_16E4307DCC419505_132* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_ABFA099FFDF04A09_METHOD_1_A8E596AFB98D3C08_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F07CCE27AA8B92E1(::Class_0_16E4307DCC419505_132* a1, ::Enum_3_D6C884A69AACE3AE a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::Enum_3_D6C884A69AACE3AE))((::PBYTE)hIl2Cpp + CLASS_1_ABFA099FFDF04A09_METHOD_1_F07CCE27AA8B92E1_OFFSET))(this, a1, a2);
	}
};
