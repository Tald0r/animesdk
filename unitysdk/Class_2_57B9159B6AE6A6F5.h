#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_57B9159B6AE6A6F5_METHOD_2_68885DCEABB3061F_OFFSET UNITYSDK_OFFSET(0xFADE340)
#define CLASS_2_57B9159B6AE6A6F5_METHOD_2_7C0ABCE8E7C44D4E_OFFSET UNITYSDK_OFFSET(0xFADE010)
#define CLASS_2_57B9159B6AE6A6F5_METHOD_2_F629B26C5D2B092E_OFFSET UNITYSDK_OFFSET(0xFADE8F0)
#define CLASS_2_57B9159B6AE6A6F5__CTOR_OFFSET UNITYSDK_OFFSET(0xFADE2F0)

inline static constexpr unsigned int Class_2_57B9159B6AE6A6F5_TypeDefinitionIndex = 42525;

class Class_2_57B9159B6AE6A6F5 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::MoleMole::UIDailyChallengeCardRowWidgetController* Field_2_1; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57B9159B6AE6A6F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7C0ABCE8E7C44D4E(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_57B9159B6AE6A6F5_METHOD_2_7C0ABCE8E7C44D4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68885DCEABB3061F(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_57B9159B6AE6A6F5_METHOD_2_68885DCEABB3061F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F629B26C5D2B092E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57B9159B6AE6A6F5_METHOD_2_F629B26C5D2B092E_OFFSET))(this);
	}
};
