#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_0D32370858E11364_1_Class_2_FBF05080BFF7BC35;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_0D32370858E11364_1_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0xD20E440)
#define CLASS_2_0D32370858E11364_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xD20E7F0)
#define CLASS_2_0D32370858E11364_1_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0xD20E5E0)
#define CLASS_2_0D32370858E11364_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD20E8A0)
#define CLASS_2_0D32370858E11364_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD20E890)

inline static constexpr unsigned int Class_2_0D32370858E11364_1_TypeDefinitionIndex = 62552;

class Class_2_0D32370858E11364_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_1_Class_2_FBF05080BFF7BC35*>*>* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_1_Class_2_FBF05080BFF7BC35*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_1_Class_2_FBF05080BFF7BC35*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}
};
