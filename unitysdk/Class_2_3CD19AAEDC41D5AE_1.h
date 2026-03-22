#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_3CD19AAEDC41D5AE_1_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x87C03D0)
#define CLASS_2_3CD19AAEDC41D5AE_1_METHOD_2_912644B05A6936B3_OFFSET UNITYSDK_OFFSET(0x87C0470)
#define CLASS_2_3CD19AAEDC41D5AE_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x87C05F0)
#define CLASS_2_3CD19AAEDC41D5AE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x87C05E0)

inline static constexpr unsigned int Class_2_3CD19AAEDC41D5AE_1_TypeDefinitionIndex = 76025;

class Class_2_3CD19AAEDC41D5AE_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CD19AAEDC41D5AE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3CD19AAEDC41D5AE_1_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3CD19AAEDC41D5AE_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_912644B05A6936B3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3CD19AAEDC41D5AE_1_METHOD_2_912644B05A6936B3_OFFSET))(this, a1, a2);
	}
};
