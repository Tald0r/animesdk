#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_0D32370858E11364_Class_2_99BC69CB30FB4283;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_0D32370858E11364_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x979C800)
#define CLASS_2_0D32370858E11364_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x979CBB0)
#define CLASS_2_0D32370858E11364_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0x979C9A0)
#define CLASS_2_0D32370858E11364_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x979CC60)
#define CLASS_2_0D32370858E11364__CTOR_OFFSET UNITYSDK_OFFSET(0x979CC50)

inline static constexpr unsigned int Class_2_0D32370858E11364_TypeDefinitionIndex = 39034;

class Class_2_0D32370858E11364 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_Class_2_99BC69CB30FB4283*>*>* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_Class_2_99BC69CB30FB4283*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_Class_2_99BC69CB30FB4283*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
