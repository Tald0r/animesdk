#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class Class_2_F79521A937A96176_Class_2_2D3B3CB086B23078;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_F79521A937A96176_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xCE43790)
#define CLASS_2_F79521A937A96176_METHOD_2_43B30E80E60A7693_OFFSET UNITYSDK_OFFSET(0xCE43370)
#define CLASS_2_F79521A937A96176_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0xCE43580)
#define CLASS_2_F79521A937A96176_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xCE43840)
#define CLASS_2_F79521A937A96176__CTOR_OFFSET UNITYSDK_OFFSET(0xCE43830)

inline static constexpr unsigned int Class_2_F79521A937A96176_TypeDefinitionIndex = 79113;

class Class_2_F79521A937A96176 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_F79521A937A96176_Class_2_2D3B3CB086B23078*>*>* Field_2_0; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F79521A937A96176__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43B30E80E60A7693(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F79521A937A96176_METHOD_2_43B30E80E60A7693_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F79521A937A96176_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F79521A937A96176_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_F79521A937A96176_Class_2_2D3B3CB086B23078*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_F79521A937A96176_Class_2_2D3B3CB086B23078*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F79521A937A96176_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}
};
