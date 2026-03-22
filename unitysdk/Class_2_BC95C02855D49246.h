#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapLeftTastListRow03Context; }
namespace MoleMole { class UIUrbanMapMissionProgressRowContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_BC95C02855D49246_METHOD_2_0EE1F7F192FB3754_OFFSET UNITYSDK_OFFSET(0x6A8A870)
#define CLASS_2_BC95C02855D49246_METHOD_2_75EE971FC92BCFEE_OFFSET UNITYSDK_OFFSET(0x6A8A4C0)
#define CLASS_2_BC95C02855D49246_METHOD_2_A38ACD63C1637D1A_OFFSET UNITYSDK_OFFSET(0x6A8AC90)
#define CLASS_2_BC95C02855D49246_METHOD_2_C7D249B46996B995_OFFSET UNITYSDK_OFFSET(0x6A8A7C0)
#define CLASS_2_BC95C02855D49246_METHOD_2_D2A14FEB25408E51_OFFSET UNITYSDK_OFFSET(0x6A8A910)
#define CLASS_2_BC95C02855D49246__CTOR_OFFSET UNITYSDK_OFFSET(0x6A8A770)

inline static constexpr unsigned int Class_2_BC95C02855D49246_TypeDefinitionIndex = 78405;

class Class_2_BC95C02855D49246 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>* Field_2_0; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftTastListRow03Context*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC95C02855D49246__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_75EE971FC92BCFEE(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_BC95C02855D49246_METHOD_2_75EE971FC92BCFEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C7D249B46996B995(::MoleMole::UIUrbanMapLeftTastListRow03Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow03Context*))((::PBYTE)hIl2Cpp + CLASS_2_BC95C02855D49246_METHOD_2_C7D249B46996B995_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EE1F7F192FB3754()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC95C02855D49246_METHOD_2_0EE1F7F192FB3754_OFFSET))(this);
	}

	::System::Int32 Method_2_D2A14FEB25408E51(::MoleMole::UIUrbanMapMissionProgressRowContext* a1, ::MoleMole::UIUrbanMapMissionProgressRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapMissionProgressRowContext*, ::MoleMole::UIUrbanMapMissionProgressRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_BC95C02855D49246_METHOD_2_D2A14FEB25408E51_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>* Method_2_A38ACD63C1637D1A()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC95C02855D49246_METHOD_2_A38ACD63C1637D1A_OFFSET))(this);
	}
};
