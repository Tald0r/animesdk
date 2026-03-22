#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5B4415A775BC0DFF.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapAreaStreetPointWidgetContext; }
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC419505_102;

#define CLASS_4_EB58FC10CA832748_METHOD_4_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xD088090)
#define CLASS_4_EB58FC10CA832748_METHOD_4_1C2DBDEE8FF068D7_OFFSET UNITYSDK_OFFSET(0xD087620)
#define CLASS_4_EB58FC10CA832748_METHOD_4_46A98066CC5E6CFD_OFFSET UNITYSDK_OFFSET(0xD088040)
#define CLASS_4_EB58FC10CA832748_METHOD_4_4ABC2F9678C4F669_OFFSET UNITYSDK_OFFSET(0xD087FB0)
#define CLASS_4_EB58FC10CA832748_METHOD_4_ED5CC9DFC2089C06_OFFSET UNITYSDK_OFFSET(0xD0883F0)
#define CLASS_4_EB58FC10CA832748__CTOR_OFFSET UNITYSDK_OFFSET(0xD087F50)

inline static constexpr unsigned int Class_4_EB58FC10CA832748_TypeDefinitionIndex = 47341;

class Class_4_EB58FC10CA832748 : public ::Class_3_5B4415A775BC0DFF<::MoleMole::UIUrbanMapAreaStreetPointWidgetContext*>
{
public:
	::Class_0_16E4307DCC419505_102<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* Field_4_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB58FC10CA832748__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1C2DBDEE8FF068D7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_4_EB58FC10CA832748_METHOD_4_1C2DBDEE8FF068D7_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_4_4ABC2F9678C4F669()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB58FC10CA832748_METHOD_4_4ABC2F9678C4F669_OFFSET))(this);
	}

	::System::Void Method_4_46A98066CC5E6CFD(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_4_EB58FC10CA832748_METHOD_4_46A98066CC5E6CFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB58FC10CA832748_METHOD_4_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>* Method_4_ED5CC9DFC2089C06()
	{
		return ((::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB58FC10CA832748_METHOD_4_ED5CC9DFC2089C06_OFFSET))(this);
	}
};
