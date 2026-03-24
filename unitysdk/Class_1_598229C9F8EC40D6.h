#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3ACFABBD8F118E93;
class Class_1_4F9417780723166C;
class Class_1_661077F66F5DB866;
namespace MoleMole { class UIHollowCardOptionsBasePopWindowController; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_598229C9F8EC40D6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8024F10)
#define CLASS_1_598229C9F8EC40D6_METHOD_1_70B541528613E7A9_OFFSET UNITYSDK_OFFSET(0x80254E0)
#define CLASS_1_598229C9F8EC40D6_METHOD_1_D87FCBA763FC9132_OFFSET UNITYSDK_OFFSET(0x8024F90)
#define CLASS_1_598229C9F8EC40D6_METHOD_1_E6E13598D8CACFE2_OFFSET UNITYSDK_OFFSET(0x80252D0)
#define CLASS_1_598229C9F8EC40D6__CTOR_OFFSET UNITYSDK_OFFSET(0x8024F00)

inline static constexpr unsigned int Class_1_598229C9F8EC40D6_TypeDefinitionIndex = 45671;

class Class_1_598229C9F8EC40D6 : public ::System::Object
{
public:
	::MoleMole::UIHollowCardOptionsDialogContext* Field_1_0; // 0x10
	::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_598229C9F8EC40D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_598229C9F8EC40D6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::MoleMole::UIHollowCardOptionsBasePopWindowController* Method_1_D87FCBA763FC9132()
	{
		return ((::MoleMole::UIHollowCardOptionsBasePopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_598229C9F8EC40D6_METHOD_1_D87FCBA763FC9132_OFFSET))(this);
	}

	::System::Void Method_1_E6E13598D8CACFE2(::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*))((::PBYTE)hIl2Cpp + CLASS_1_598229C9F8EC40D6_METHOD_1_E6E13598D8CACFE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_70B541528613E7A9(::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>*))((::PBYTE)hIl2Cpp + CLASS_1_598229C9F8EC40D6_METHOD_1_70B541528613E7A9_OFFSET))(this, a1);
	}
};
