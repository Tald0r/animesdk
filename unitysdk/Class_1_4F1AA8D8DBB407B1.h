#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicImgStyleConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4F1AA8D8DBB407B1_METHOD_1_036748E8DED4DC64_OFFSET UNITYSDK_OFFSET(0x6B8D7B0)
#define CLASS_1_4F1AA8D8DBB407B1_METHOD_1_76577C517198B683_OFFSET UNITYSDK_OFFSET(0x6B8DC10)
#define CLASS_1_4F1AA8D8DBB407B1_METHOD_1_C7CDD7C60F10FD83_OFFSET UNITYSDK_OFFSET(0x6B8DE70)
#define CLASS_1_4F1AA8D8DBB407B1_METHOD_1_DA3E3E7F1780AB78_OFFSET UNITYSDK_OFFSET(0x6B8DC50)
#define CLASS_1_4F1AA8D8DBB407B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B8D7A0)

inline static constexpr unsigned int Class_1_4F1AA8D8DBB407B1_TypeDefinitionIndex = 49524;

class Class_1_4F1AA8D8DBB407B1 : public ::System::Object
{
public:
	static ::MoleMole::ComicImgStyleConfig** StaticGet_Field_1_1()
	{
		return (::MoleMole::ComicImgStyleConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F1AA8D8DBB407B1_TypeDefinitionIndex)->GetStaticField(0x33A80);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F1AA8D8DBB407B1__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_036748E8DED4DC64(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4F1AA8D8DBB407B1_METHOD_1_036748E8DED4DC64_OFFSET))(a1, a2);
	}

	static ::MoleMole::ComicImgStyleConfig* Method_1_76577C517198B683()
	{
		return ((::MoleMole::ComicImgStyleConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F1AA8D8DBB407B1_METHOD_1_76577C517198B683_OFFSET))();
	}

	static ::MoleMole::ComicImgStyle* Method_1_DA3E3E7F1780AB78(::System::String* a1)
	{
		return ((::MoleMole::ComicImgStyle*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F1AA8D8DBB407B1_METHOD_1_DA3E3E7F1780AB78_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7CDD7C60F10FD83(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F1AA8D8DBB407B1_METHOD_1_C7CDD7C60F10FD83_OFFSET))(a1, a2, a3, a4);
	}
};
