#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_29724340FE58DC7A;
class Class_1_48D56DACBE4271BC;
class Class_1_67C051A8B566820B;
class Class_1_F10652F2FD52673B;
class Class_2_74776F359A0822CA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_3_F11DDE54D3723348_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x86539F0)
#define CLASS_3_F11DDE54D3723348_METHOD_3_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0x86549E0)
#define CLASS_3_F11DDE54D3723348_METHOD_3_4933529D7A8B2CE0_OFFSET UNITYSDK_OFFSET(0x8654350)
#define CLASS_3_F11DDE54D3723348_METHOD_3_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x8653C00)
#define CLASS_3_F11DDE54D3723348_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8654980)
#define CLASS_3_F11DDE54D3723348_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x86540B0)
#define CLASS_3_F11DDE54D3723348_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x8654010)
#define CLASS_3_F11DDE54D3723348_METHOD_3_D5CDC4693D064029_OFFSET UNITYSDK_OFFSET(0x86536A0)
#define CLASS_3_F11DDE54D3723348_METHOD_3_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x8653160)
#define CLASS_3_F11DDE54D3723348_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x8652920)
#define CLASS_3_F11DDE54D3723348__CCTOR_OFFSET UNITYSDK_OFFSET(0x8653A50)
#define CLASS_3_F11DDE54D3723348__CTOR_OFFSET UNITYSDK_OFFSET(0x8653AD0)

inline static constexpr unsigned int Class_3_F11DDE54D3723348_TypeDefinitionIndex = 80077;

class Class_3_F11DDE54D3723348 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0x7D; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_29724340FE58DC7A*>* Field_3_0; // 0x48
	::System::Action* Field_3_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_3; // 0x58
	::Class_1_F10652F2FD52673B* Field_3_5; // 0x60
	::Class_1_67C051A8B566820B* Field_3_7; // 0x68
	::Class_1_48D56DACBE4271BC* Field_3_6; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_3_8; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* Field_3_9; // 0x80
	::Class_2_74776F359A0822CA* Field_3_1; // 0x88
	::System::UInt32 Field_3_2; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_821BBDC04720A2EB_OFFSET))(this);
	}

	static ::Class_3_F11DDE54D3723348* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F11DDE54D3723348*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_3_4933529D7A8B2CE0(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_4933529D7A8B2CE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FDF9B21BA16000B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_FDF9B21BA16000B3_OFFSET))(this, a1);
	}

	::System::Void Method_3_D5CDC4693D064029(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_D5CDC4693D064029_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348_METHOD_3_3F61F56295827FBC_OFFSET))(this, a1);
	}
};
