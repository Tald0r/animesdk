#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_163D707FB4753028_Struct_2_AB727CEB9DB057CC.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_E13183B148E560DC;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define CLASS_1_163D707FB4753028_METHOD_1_03F514251CBF9D10_OFFSET UNITYSDK_OFFSET(0x1A87C220)
#define CLASS_1_163D707FB4753028_METHOD_1_0AFA90E4B45F47A7_OFFSET UNITYSDK_OFFSET(0x1A87C0C0)
#define CLASS_1_163D707FB4753028_METHOD_1_35277BC05F1E90F4_OFFSET UNITYSDK_OFFSET(0x1A87CF40)
#define CLASS_1_163D707FB4753028_METHOD_1_6018BFBA18910832_OFFSET UNITYSDK_OFFSET(0x1A87CB40)
#define CLASS_1_163D707FB4753028_METHOD_1_60300F803EAFD6A2_OFFSET UNITYSDK_OFFSET(0x1A87CF90)
#define CLASS_1_163D707FB4753028_METHOD_1_63E6A95369D84B73_OFFSET UNITYSDK_OFFSET(0x1A87D190)
#define CLASS_1_163D707FB4753028_METHOD_1_8E9D073CC678ECF8_OFFSET UNITYSDK_OFFSET(0x1A87C360)
#define CLASS_1_163D707FB4753028_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1A87C040)
#define CLASS_1_163D707FB4753028_METHOD_1_A2035DEE3A57E3D1_OFFSET UNITYSDK_OFFSET(0x1A87CA50)
#define CLASS_1_163D707FB4753028_METHOD_1_CCE585BF86A87E5E_OFFSET UNITYSDK_OFFSET(0x1A87BCC0)
#define CLASS_1_163D707FB4753028_METHOD_1_D30EBA494E797AB6_OFFSET UNITYSDK_OFFSET(0x1A87BE40)
#define CLASS_1_163D707FB4753028_METHOD_1_DE6944114720518B_OFFSET UNITYSDK_OFFSET(0x1A87C570)
#define CLASS_1_163D707FB4753028_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x1A87C5C0)
#define CLASS_1_163D707FB4753028__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87BA50)

inline static constexpr unsigned int Class_1_163D707FB4753028_TypeDefinitionIndex = 83703;

class Class_1_163D707FB4753028 : public ::System::Object
{
public:
	::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E13183B148E560DC*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_163D707FB4753028_Struct_2_AB727CEB9DB057CC>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_1_2; // 0x30
	::Class_1_0C791B68CB2A5BF5* Field_1_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>*>* Field_1_1; // 0x40
	::UnityEngine::MaterialPropertyBlock* Field_1_7; // 0x48
	::System::Int32 Field_1_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_CCE585BF86A87E5E(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_CCE585BF86A87E5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D30EBA494E797AB6(::System::Int32 a1, ::Struct_2_E614D3B245F96744 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_E614D3B245F96744))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_D30EBA494E797AB6_OFFSET))(this, a1, a2);
	}

	static ::Class_1_163D707FB4753028* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_163D707FB4753028*(*)())((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_0AFA90E4B45F47A7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_0AFA90E4B45F47A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E9D073CC678ECF8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_8E9D073CC678ECF8_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_DE6944114720518B(::Class_1_163D707FB4753028* a1)
	{
		return ((::System::Void(*)(::Class_1_163D707FB4753028*))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_DE6944114720518B_OFFSET))(a1);
	}

	::System::Void Method_1_03F514251CBF9D10(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_03F514251CBF9D10_OFFSET))(this, a1, a2);
	}

	::Class_1_E13183B148E560DC* Method_1_A2035DEE3A57E3D1(::UnityEngine::SpriteRenderer* a1)
	{
		return ((::Class_1_E13183B148E560DC*(*)(::PVOID, ::UnityEngine::SpriteRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_A2035DEE3A57E3D1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_6018BFBA18910832(::System::Int32 a1, ::System::String* a2, ::Struct_2_E614D3B245F96744 a3, ::System::Single a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*, ::Struct_2_E614D3B245F96744, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_6018BFBA18910832_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::Class_1_163D707FB4753028* Method_1_35277BC05F1E90F4(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* a1)
	{
		return ((::Class_1_163D707FB4753028*(*)(::PVOID, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_35277BC05F1E90F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_60300F803EAFD6A2(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_60300F803EAFD6A2_OFFSET))(this, a1, a2);
	}

	::Class_1_163D707FB4753028* Method_1_63E6A95369D84B73(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Transform* a3)
	{
		return ((::Class_1_163D707FB4753028*(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_163D707FB4753028_METHOD_1_63E6A95369D84B73_OFFSET))(this, a1, a2, a3);
	}
};
