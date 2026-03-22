#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6F395B609880F65.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_1D8DB7117459C20D_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1A9511B0)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_1E1B584909E026DF_OFFSET UNITYSDK_OFFSET(0x1A951980)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_42A18C313E14471B_OFFSET UNITYSDK_OFFSET(0x1A9518F0)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0x1A951EE0)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_912AFC1299B0A806_OFFSET UNITYSDK_OFFSET(0x1A951D30)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1A951160)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_C762B09F1D70312B_OFFSET UNITYSDK_OFFSET(0x1A951AF0)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A951900)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_D6243C6907C3DBF3_OFFSET UNITYSDK_OFFSET(0x1A951560)
#define CLASS_4_1D8DB7117459C20D_METHOD_4_FBAC2F70799E5CFB_OFFSET UNITYSDK_OFFSET(0x1A951D80)
#define CLASS_4_1D8DB7117459C20D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A951390)

inline static constexpr unsigned int Class_4_1D8DB7117459C20D_TypeDefinitionIndex = 80152;

class Class_4_1D8DB7117459C20D : public ::Class_3_C6F395B609880F65
{
public:
	// static const ::System::Int32 Field_4_0 = 0x1F; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_4_4; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_4_2; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_4_3; // 0x80
	::UnityEngine::Animator* Field_4_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_D6243C6907C3DBF3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_D6243C6907C3DBF3_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_42A18C313E14471B()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_42A18C313E14471B_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_1E1B584909E026DF(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_1E1B584909E026DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_C762B09F1D70312B(::Class_4_1D8DB7117459C20D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_1D8DB7117459C20D*))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_C762B09F1D70312B_OFFSET))(this, a1);
	}

	::Class_4_1D8DB7117459C20D* Method_4_912AFC1299B0A806()
	{
		return ((::Class_4_1D8DB7117459C20D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_912AFC1299B0A806_OFFSET))(this);
	}

	::System::Void Method_4_FBAC2F70799E5CFB(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_FBAC2F70799E5CFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_8E66B82298267DC3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_1D8DB7117459C20D_METHOD_4_8E66B82298267DC3_OFFSET))(this, a1);
	}
};
