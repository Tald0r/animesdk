#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace MoleMole { class ActivityRhythmClickBeatmapConfig_BeatMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_24E79B58F4092AAC_METHOD_1_11ADF62AA096DE37_OFFSET UNITYSDK_OFFSET(0xCAFCB50)
#define CLASS_1_24E79B58F4092AAC_METHOD_1_468E89153934FFD0_OFFSET UNITYSDK_OFFSET(0xCAFC580)
#define CLASS_1_24E79B58F4092AAC_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0xCAFC690)
#define CLASS_1_24E79B58F4092AAC_METHOD_1_C31A7006A0AF02F8_OFFSET UNITYSDK_OFFSET(0xCAFCC90)
#define CLASS_1_24E79B58F4092AAC__CTOR_OFFSET UNITYSDK_OFFSET(0xCAFC570)

inline static constexpr unsigned int Class_1_24E79B58F4092AAC_TypeDefinitionIndex = 61507;

class Class_1_24E79B58F4092AAC : public ::System::Object
{
public:
	static ::MoleMole::ActivityRhythmClickBeatmapConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::ActivityRhythmClickBeatmapConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24E79B58F4092AAC_TypeDefinitionIndex)->GetStaticField(0x2DC00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E79B58F4092AAC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_468E89153934FFD0(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24E79B58F4092AAC_METHOD_1_468E89153934FFD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap* Method_1_11ADF62AA096DE37(::System::String* a1)
	{
		return ((::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24E79B58F4092AAC_METHOD_1_11ADF62AA096DE37_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_24E79B58F4092AAC_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_C31A7006A0AF02F8(::System::String* a1)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24E79B58F4092AAC_METHOD_1_C31A7006A0AF02F8_OFFSET))(a1);
	}
};
