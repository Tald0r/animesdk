#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRoleCarRowWidgetContext; }
namespace MoleMole { class UIUrbanMapRoleCardRowItemWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_117F4DB20E1B394A;

#define CLASS_2_FADD74E32906CBBE_METHOD_2_25311493710404E7_OFFSET UNITYSDK_OFFSET(0x64FD630)
#define CLASS_2_FADD74E32906CBBE_METHOD_2_50B405233A2D044C_OFFSET UNITYSDK_OFFSET(0x64FD6F0)
#define CLASS_2_FADD74E32906CBBE_METHOD_2_7FA897DAE4FD70E6_OFFSET UNITYSDK_OFFSET(0x64FD1D0)
#define CLASS_2_FADD74E32906CBBE_METHOD_2_D22AEA4DD2AB2828_OFFSET UNITYSDK_OFFSET(0x64FCEA0)
#define CLASS_2_FADD74E32906CBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x64FD130)

inline static constexpr unsigned int Class_2_FADD74E32906CBBE_TypeDefinitionIndex = 59256;

class Class_2_FADD74E32906CBBE : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRoleCarRowWidgetContext*>* Field_2_0; // 0x50
	::Class_2_117F4DB20E1B394A<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Field_2_2; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D22AEA4DD2AB2828(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_D22AEA4DD2AB2828_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Method_2_7FA897DAE4FD70E6()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_7FA897DAE4FD70E6_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Method_2_25311493710404E7()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_25311493710404E7_OFFSET))(this);
	}

	::System::Void Method_2_50B405233A2D044C(::MoleMole::UIUrbanMapRoleCarRowWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRoleCarRowWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_50B405233A2D044C_OFFSET))(this, a1);
	}
};
