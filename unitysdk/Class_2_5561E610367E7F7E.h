#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISocialCircleInviteContext; }
namespace MoleMole { class UISocialCircleInviteRowContext; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_5561E610367E7F7E_METHOD_2_004A6B83CE73C2C6_OFFSET UNITYSDK_OFFSET(0x5E90FC0)
#define CLASS_2_5561E610367E7F7E_METHOD_2_39D643ACADCD2B68_OFFSET UNITYSDK_OFFSET(0x5E90CF0)
#define CLASS_2_5561E610367E7F7E_METHOD_2_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x5E91070)
#define CLASS_2_5561E610367E7F7E_METHOD_2_D80AB6716AC7EAD3_OFFSET UNITYSDK_OFFSET(0x5E900C0)
#define CLASS_2_5561E610367E7F7E_METHOD_2_E3BBA4124A537C02_OFFSET UNITYSDK_OFFSET(0x5E905F0)
#define CLASS_2_5561E610367E7F7E__CTOR_OFFSET UNITYSDK_OFFSET(0x5E90550)

inline static constexpr unsigned int Class_2_5561E610367E7F7E_TypeDefinitionIndex = 50888;

class Class_2_5561E610367E7F7E : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UISocialCircleInviteRowContext*>* Field_2_1; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UISocialCircleInviteContext*>* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5561E610367E7F7E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D80AB6716AC7EAD3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_5561E610367E7F7E_METHOD_2_D80AB6716AC7EAD3_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E3BBA4124A537C02(::MoleMole::UISocialCircleInviteRowContext* a1, ::MoleMole::UISocialCircleInviteRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UISocialCircleInviteRowContext*, ::MoleMole::UISocialCircleInviteRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_5561E610367E7F7E_METHOD_2_E3BBA4124A537C02_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Method_2_39D643ACADCD2B68()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5561E610367E7F7E_METHOD_2_39D643ACADCD2B68_OFFSET))(this);
	}

	::System::Void Method_2_004A6B83CE73C2C6(::MoleMole::UISocialCircleInviteContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleInviteContext*))((::PBYTE)hIl2Cpp + CLASS_2_5561E610367E7F7E_METHOD_2_004A6B83CE73C2C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5561E610367E7F7E_METHOD_2_8F537CE539CF0103_OFFSET))(this);
	}
};
