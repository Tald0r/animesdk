#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_2_117F4DB20E1B394A;

#define CLASS_2_75E4A28BA5710ECD_METHOD_2_0BF7DDED16A5BE07_OFFSET UNITYSDK_OFFSET(0x9F6F730)
#define CLASS_2_75E4A28BA5710ECD_METHOD_2_2C033AC010362385_OFFSET UNITYSDK_OFFSET(0x9F6FC70)
#define CLASS_2_75E4A28BA5710ECD_METHOD_2_55A2D7889F07519C_OFFSET UNITYSDK_OFFSET(0x9F6FF50)
#define CLASS_2_75E4A28BA5710ECD_METHOD_2_573103E18ED7B61D_OFFSET UNITYSDK_OFFSET(0x9F70020)
#define CLASS_2_75E4A28BA5710ECD_METHOD_2_860B0AA036A21F06_OFFSET UNITYSDK_OFFSET(0x9F70010)
#define CLASS_2_75E4A28BA5710ECD__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6FB40)

inline static constexpr unsigned int Class_2_75E4A28BA5710ECD_TypeDefinitionIndex = 56918;

class Class_2_75E4A28BA5710ECD : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_117F4DB20E1B394A<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Field_2_1; // 0x50
	::System::Int32 Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75E4A28BA5710ECD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0BF7DDED16A5BE07(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_75E4A28BA5710ECD_METHOD_2_0BF7DDED16A5BE07_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Method_2_2C033AC010362385()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75E4A28BA5710ECD_METHOD_2_2C033AC010362385_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_55A2D7889F07519C()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75E4A28BA5710ECD_METHOD_2_55A2D7889F07519C_OFFSET))(this);
	}

	::System::Void Method_2_860B0AA036A21F06(::Class_2_117F4DB20E1B394A<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_117F4DB20E1B394A<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*))((::PBYTE)hIl2Cpp + CLASS_2_75E4A28BA5710ECD_METHOD_2_860B0AA036A21F06_OFFSET))(this, a1);
	}

	::Class_2_117F4DB20E1B394A<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Method_2_573103E18ED7B61D()
	{
		return ((::Class_2_117F4DB20E1B394A<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75E4A28BA5710ECD_METHOD_2_573103E18ED7B61D_OFFSET))(this);
	}
};
