#include "Preheader.h"
#include "Platform/GLFWindow/GWindow.h"

#include "GLFW/glfw3.h"

namespace EagleClaw {

GWindow::GWindow(const size_t width, const size_t height) {

}

GWindow::~GWindow() {
}

void GWindow::OnUpdate() {
}

const size_t GWindow::GetWidth() const {
}

const size_t GWindow::GetHeight() const {
}

void GWindow::SetEventCallback(EventCallback& callback) {
}

void GWindow::SetVSync(bool enabled) {
}

bool GWindow::IsVSync() const {
}

void* GWindow::GetNaiveWindow() const {
}

void GWindow::Init() {
}

void GWindow::ShutDown() {
}

}  // namespace EagleClaw