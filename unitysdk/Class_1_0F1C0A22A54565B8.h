#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoConfig; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0F1C0A22A54565B8_METHOD_1_0004EB5BFAE95784_OFFSET UNITYSDK_OFFSET(0x80051F0)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x8005440)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_0E5A5AAC84914C23_OFFSET UNITYSDK_OFFSET(0x8005270)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_5F90031889A32372_OFFSET UNITYSDK_OFFSET(0x8005400)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x8005550)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_A758CCC157B9572C_OFFSET UNITYSDK_OFFSET(0x8005730)

inline static constexpr unsigned int Class_1_0F1C0A22A54565B8_TypeDefinitionIndex = 52899;

class Class_1_0F1C0A22A54565B8 : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectPatternInfoConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::EffectPatternInfoConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F1C0A22A54565B8_TypeDefinitionIndex)->GetStaticField(0x2DD40);
	}

	static ::System::Boolean Method_1_0004EB5BFAE95784(::System::String* a1, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_0004EB5BFAE95784_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* Method_1_0E5A5AAC84914C23(::System::String* a1)
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_0E5A5AAC84914C23_OFFSET))(a1);
	}

	static ::System::Void Method_1_5F90031889A32372(::MoleMole::Config::EffectPatternInfoConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_5F90031889A32372_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::EffectPatternInfoConfig* Method_1_A758CCC157B9572C()
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_A758CCC157B9572C_OFFSET))();
	}
};
