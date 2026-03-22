#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2CA0DB3307D613FD_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xBDCBAF0)
#define CLASS_2_2CA0DB3307D613FD_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0xBDCBBC0)
#define CLASS_2_2CA0DB3307D613FD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBDCBD40)
#define CLASS_2_2CA0DB3307D613FD__CTOR_OFFSET UNITYSDK_OFFSET(0xBDCBD30)

inline static constexpr unsigned int Class_2_2CA0DB3307D613FD_TypeDefinitionIndex = 61644;

class Class_2_2CA0DB3307D613FD : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CA0DB3307D613FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2CA0DB3307D613FD_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2CA0DB3307D613FD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2CA0DB3307D613FD_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
