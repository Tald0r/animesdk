#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_4565DCF72DE284B9_METHOD_2_1FC94BA33A151EF7_OFFSET UNITYSDK_OFFSET(0xBB563C0)
#define CLASS_2_4565DCF72DE284B9_METHOD_2_4363F2A11989416A_OFFSET UNITYSDK_OFFSET(0xBB56860)
#define CLASS_2_4565DCF72DE284B9_METHOD_2_624537007A4B6A85_OFFSET UNITYSDK_OFFSET(0xBB567B0)
#define CLASS_2_4565DCF72DE284B9_METHOD_2_DC462D8B67651BD2_OFFSET UNITYSDK_OFFSET(0xBB56620)
#define CLASS_2_4565DCF72DE284B9__CTOR_OFFSET UNITYSDK_OFFSET(0xBB565D0)

inline static constexpr unsigned int Class_2_4565DCF72DE284B9_TypeDefinitionIndex = 41827;

class Class_2_4565DCF72DE284B9 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1FC94BA33A151EF7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_1FC94BA33A151EF7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* Method_2_DC462D8B67651BD2()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_DC462D8B67651BD2_OFFSET))(this);
	}

	::System::Void Method_2_624537007A4B6A85(::MoleMole::UIUrbanMapTrackLineWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapTrackLineWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_624537007A4B6A85_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_2_4363F2A11989416A()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_4363F2A11989416A_OFFSET))(this);
	}
};
